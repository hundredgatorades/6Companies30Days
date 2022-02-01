vector<string> winner(string arr[],int n)
    {
        map<string, int> m;
        int c=0;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
            c=max(c,m[arr[i]]);
        }
        ;
        vector<string> v;
        for(auto itr:m)
        {
            if(itr.second==c)
            {
                v.push_back(itr.first);
                break;
            }
        }
        v.push_back(to_string(c));
        return v;
    }