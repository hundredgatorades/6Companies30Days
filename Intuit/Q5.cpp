bool isValid(vector<int> a, int k,int mid)
    {
        int n=a.size();
        int sum=0;
        int subarray=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]>mid)
                return false;
            sum+=a[i];
            if(sum>mid)
            {
                subarray++;
                sum=a[i];
            }
            if(subarray>k)
                return false;
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        int mn=INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,nums[i]);
            sum+=nums[i];
        }
        int low=mn;
        int high=sum;
        int ans=-1;
        while(low<=high)
        {
            int mid=low+((high-low)>>1);
            if(isValid(nums,m,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return ans;
    }