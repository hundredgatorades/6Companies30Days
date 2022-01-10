vector<vector<string> > Anagrams(vector<string>& v) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> m;
        for(int i=0;i<v.size();i++)
        {
            string w=v[i];
            sort(w.begin(),w.end());
            m[w].push_back(v[i]);
        }
        for(auto it:m)
        {
            ans.push_back(it.second);
        }
        return ans;
    }