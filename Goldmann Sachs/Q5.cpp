ull getNthUglyNo(int n) {
	    // code here
	    vector<ull> p = {2,3,5};
        ull size = p.size();
        vector<ull> pos(size,0);
        vector<ull> ug = {1};
        unordered_set<ull> us;
        us.insert(1);
        vector<ull> c;
        for(ull i=0; i<size; i++)
        {
            c.push_back(p[i]*ug[pos[i]]);
        }
        while(ug.size() <= n)
        {
            auto next_ele = min_element(c.begin(), c.end());
            if(us.find(*next_ele) == us.end())
            {
                ug.push_back(*next_ele);
                us.insert(*next_ele);
            }
            
            ull ind = next_ele - c.begin();
            pos[ind]++;
            
            c[ind] = p[ind] * ug[pos[ind]];
        }
        
        return ug[n-1];
	}