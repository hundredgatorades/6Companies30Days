bool canPair(vector<int> nums, int k) {
        // Code here.
        map<int,int>h;
        for(auto p:nums) { // count the frequencies
            h[p%k]+=1;
        }
        for(auto p:nums) 
        {
            int rem=p%k;
            if(rem==0) 
            {
                if(h[rem]&1) // if odd num of remainder=0
                    return false;
            }
            else if(h[rem]!=h[k-rem]) //if k=6,then h[2]!=h[4]
                return false;
        }
        return true;
    }