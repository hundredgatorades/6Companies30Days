vector<int> spirallyTraverse(vector<vector<int> > m, int r, int c) 
    {
        // code here 
        vector<int> v;
        vector<int> part(c,0);
        vector<vector<int>> vis(r,part);
        int q,k,p,l;
        for(int i=0;i<min(r,c);i++)
        {
            if(vis[i][i])
            {
                continue;
            }
            for(p=i;p<c-i;p++)
            {
                
                if(vis[i][p])
                {
                    continue;
                }
                v.push_back(m[i][p]);
                vis[i][p]=1;
            }
            for(q=i+1;q<r-i;q++)
            {
                if(vis[q][c-i-1])
                    continue;
                v.push_back(m[q][c-i-1]);
                vis[q][c-i-1]=1;
            }
            for(k=c-i-2;k>=i;k--)
            {
                if(vis[r-i-1][k])
                    continue;
                v.push_back(m[r-i-1][k]);
                vis[r-i-1][k]=1;
            }
            for(l=r-i-2;l>i;l--)
            {
                if(vis[l][i])
                    continue;
                v.push_back(m[l][i]);
                vis[l][i]=1;
            }
            
        }
        
        return v;
        
    }