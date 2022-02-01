int longestMountain(vector<int>& a) {
        int k=-1,j=-1,d=0,i;
        int n=a.size();
        if(n<3)
        {
            return 0;
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]>a[i])
            {
                
                if(k!=-1)
                {
                    k=-1;
                    j=-1;
                }
                if(j==-1)
                {
                    j=i;
                }
            }
            else
            {
                
                if(a[i+1]<a[i])
                {
                    if(j!=-1)
                    {
                        k=i+1;
                    }
                    if(j!=-1 && k!=-1)
                    {
                        if(d<k-j+1)
                        {
                            d=k-j+1;
                        }
                    }
                }
                else
                {
                    k=-1;
                    j=-1;
                }
            }
        }
        if(j!=-1 && k!=-1)
        {
            if(d<k-j+1)
            {
                d=k-j+1;
            }
        }
        return d;
    }