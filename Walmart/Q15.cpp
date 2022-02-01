class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1)
            return INT_MAX;
        
        long long ans=0;
        int neg=0;
        if((divisor<0 && dividend>0) || (divisor>0 && dividend<0))
            neg=-1;
        
        long long a=abs(dividend);
        long long b=abs(divisor);
        for(int i=31;i>=0;i--)
        {
            long long z=b<<i;
            if(z<=a)
            {
                a=a-(b<<i);
                ans+=1<<i;
            }
        }
        if(neg==0)
            return ans;
        else
            return -1*ans;
    }
};