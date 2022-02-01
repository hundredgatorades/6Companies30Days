int isValid(vector<vector<int>> mat){
        // code here
        int ans=0;
        for(int i=0;i<9;i++)
        {
            map<int,int> m;
            for(int j=0;j<9;j++)
            {
                if(mat[i][j]!=0)
                {
                    if(m.find(mat[i][j])==m.end())
                    {
                        m.insert({mat[i][j],1});
                    }
                    else
                    {
                        ans=-1;
                        break;
                    }
                }
            }
            if(ans==-1)
            {
                return 0;
            }
        }
        for(int i=0;i<9;i++)
        {
            map<int,int> m1;
            for(int j=0;j<9;j++)
            {
                if(mat[j][i]!=0)
                {
                    if(m1.find(mat[j][i])==m1.end())
                    {
                        m1.insert({mat[j][i],1});
                    }
                    else
                    {
                        ans=-1;
                        break;
                    }
                }
            }
            if(ans==-1)
            {
                return 0;
            }
        }
        
        
        for (int i = 0; i < 7;i+=3) 
        {
            
            for (int j = 0; j < 7;j+=3) 
            {
                map<int, int> m;
                for (int k = 0; k < 3;k++) 
                {
                    for (int l = 0; l < 3;l++) 
                    {
                        int X = i + k;
                        int Y = j + l;
                        int Z = mat[X][Y];
                        if(Z!=0)
                        {
                            if (m.find(Z)==m.end()) 
                            {
                                m.insert({Z,1});
                            }
                            else
                            {
                                ans=-1;
                                break;
                            }
                        }
                        
                    }
                    if(ans==-1)
                    {
                        break;
                    }
                }
                if(ans==-1)
                {
                    return 0;
                }
            }
         }
         return 1;
    }