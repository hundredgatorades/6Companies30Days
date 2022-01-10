int countSubArrayProductLessThanK(vector<int>& a, int n, long long k) {
        if(n==1)
        {
            if(a[0]<k) 
            {
                return 1;
            }
            else 
            {
                return 0;
            }
        }
        long long pp = 1;
        int i=0,j=0;
        long count = 0;
        while(j<n)
        {
            pp*=a[j];
            
            while(pp>=k and i<=j)
            {   
                pp/=a[i];
                i++;
            }
            count+=(j-i+1);
            j++;
        }
        
        return (int)count;
    }