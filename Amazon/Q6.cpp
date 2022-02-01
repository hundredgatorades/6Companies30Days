vector<int> max_of_subarrays(vector<int> a, int n, int k) {
        // your code here
        vector<int> ans;
        int max=INT_MIN;
        //priority_queue<int> pq;
        deque<int> q;
        for(int i=0;i<k;i++)
        {
            while(!q.empty() && a[i]>=a[q.back()])
            {
                q.pop_back();
            }    
            q.push_back(i);
            //pq.push(a[i]);
        }
        //max=pq.top();
        //ans.push_back(max);
        for(int i=k;i<n;i++)
        {
            ans.push_back(a[q.front()]);
            while((!q.empty()) && i-k>=q.front())
            {
                q.pop_front();
            }
            while((!q.empty()) && a[i]>=a[q.back()])
            {
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(a[q.front()]);
        return ans;
    }