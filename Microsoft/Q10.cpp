int FindMaxSum(int a[], int n)
    {
        // Your code here
        if(n==1)
            return a[0];
        int sum=0;
        int b=a[0];
        for(int i=1;i<n;i++)
        {
            int c=max(b,sum+a[i]);
            sum=b;
            b=c;
        }
        
        return b;
    }
    