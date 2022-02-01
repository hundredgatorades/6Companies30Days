class Solution{
    public:
    //You need to complete this fucntion
    long long m=1000000007;
    long long helper(long long N, long long R)
    {
        long long ans;
       if(N==0)
            return 0;
       if(R==0)
            return 1;
       if(R%2==0)
       {
           ans=helper(N,R/2);
           ans=(ans*ans)%m;
       }
       else
       {
           ans=N%m;
           ans=(ans * helper(N,R-1)%m)%m;
       }
        return ((ans+m)%m);
    }
    long long power(int N,int R)
    {
       //Your code here
       return helper(N,R)%m;
       
    }

};