int *findTwoElement(int *a, int n) {
        // code here
        int *ans= new int[2];
        for(int i=0;i<n;i++)
        {
            while(a[i]!=a[a[i]-1] && i<n)
            {
                swap(a[i],a[a[i]-1]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=i+1)
            {
                ans[0]=a[i];
                ans[1]=i+1;
            }
        }
        return ans;
    }