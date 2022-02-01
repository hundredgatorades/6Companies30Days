int minSwaps(vector<vector<int>>& g) 
    {
        int n=g.size();
        if(n==0)
            return 0;
        vector<int>mr(n,0),m1;
        for(int i=0;i<n;i++)
            for(int j=n-1;j>=0;j--)
                if(g[i][j]==1)
                {
                    mr[i]=j;
                    break;
                }
        m1=mr;
        sort(m1.begin(),m1.end());
        for(int i=0;i<n;i++)  
            if(m1[i]>i)
                return -1;
        
        int swaps=0;
        for (int i=0; i<n; ++i)  
		{
            int k = i + 1;
            while (mr[i] > i)
			{
                swap(mr[i], mr[k++]);
                ++swaps;
            }
        }
        return swaps;
    }