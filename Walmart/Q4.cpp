int NumberOfPath(int a, int b)
    {
        //code here
       int r= a-1;
       int n = a+b-2;
       double ans = 1;
       for(int i=1;i<=r;i++)
       {
           ans = ans * (n-r+i)/i;
       }
       return (int)ans;
    }