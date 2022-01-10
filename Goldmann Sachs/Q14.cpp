int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0, n = nums.size(), sum = 0, len = INT_MAX;
        while (r < n) {
            sum += nums[r++];
            while (sum >= target) 
            {
                len = min(len, r - l);
                sum -= nums[l++];
            }
        }
        if(len==INT_MAX)
        {
            return 0;
        }
        else
        {
            return len;
        }
        
    
    }