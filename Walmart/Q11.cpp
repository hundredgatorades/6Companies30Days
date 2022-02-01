int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int, int>> p;
        for (int i = 0; i < n; ++i)
            p.emplace_back(efficiency[i], speed[i]);
        sort(rbegin(p), rend(p));
        long sumS = 0, res = 0;
        priority_queue <int, vector<int>, greater<int>> pq; 
        for(auto& [e, s]: p){
            pq.emplace(s);
            sumS += s;
            if (pq.size() > k) {
                sumS -= pq.top();
                pq.pop();
            }
            res = max(res, sumS * e);
        }
        return res % (int)(1e9+7);
    }