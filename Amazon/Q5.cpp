vector<vector<string>> displayContacts(int n, string a[], string s)
    {
        // code here
        vector<vector<string>> ans;
        
        map<string, int> m;
        for(int i=0;i<n;i++)
        {
            if(m.find(a[i])==m.end())
            {
                m.insert({a[i],1});
            }
            else
            {
                m[a[i]]++;
            }
        }
        int l=s.length();
        //map<string, int> :: iterator itr;
        for(int i=1;i<=l;i++)
        {
            string p=s.substr(0,i);
            //cout << p << endl;
            vector<string> v;
            for(auto itr : m)
            {
                string q=itr.first;
                if(q.substr(0,i)==p)
                {
                    v.push_back(q);
                }
                
            }
            if(v.size()==0)
            {
                v.push_back("0");
            }
            ans.push_back(v);
            
        }
        return ans;
    }