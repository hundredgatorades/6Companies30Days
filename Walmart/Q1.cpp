double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        typedef pair<double, int> Edge;
        vector<vector<Edge>> adj(n);
        for (int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].emplace_back(-log(succProb[i]), edges[i][1]);
            adj[edges[i][1]].emplace_back(-log(succProb[i]), edges[i][0]);
        }
        vector<bool> visited(n, false);
        vector<double> cost(n, DBL_MAX); cost[start] = 0;
        priority_queue<Edge, vector<Edge>, greater<Edge>> q;
        q.push({0, start});
        while(q.size()) {
            auto [p_, x] = q.top(); q.pop();
            if (x == end) break;
            visited[x] = true;
            for (auto [p, y] : adj[x]) {
                if (!visited[y] && p + cost[x] < cost[y]) {
                    cost[y] = cost[x] + p;
                    q.push({cost[y], y});
                }
            }
        }
        return exp(-cost[end]);
    }