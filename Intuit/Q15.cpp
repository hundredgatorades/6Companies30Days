int minEatingSpeed(vector<int>& v, int h) {
        sort(v.begin(), v.end());
        int n=v.size();
        int r=v[n-1], l=1;
        int ans=INT_MAX;
        if(n==1)
        {
            return ceil(v[0]*1.0/h*1.0);
        }
        while(l<r)
        {
            int mid=(l+r)/2;
            double hours=0;
            for(int i=0;i<n;i++)
            {
                hours=hours+ceil(v[i]*1.0/mid*1.0);
            }
            if(hours>h)
            {
                l=mid+1;
            }
            else if(hours<h)
            {
                r=mid;
            }
            else
            {
                ans=min(ans,mid);
                r=mid;
            }
        }
        if(l==r)
                ans=r;
        return ans;
    }