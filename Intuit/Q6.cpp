int findInMountainArray(int target, MountainArray &mA) {
        int pI = -1;
        int n = mA.length();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            int next = (mid+1)%n;
            if(mA.get(mid) > mA.get(next)){
                pI = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        low = 0, high = pI;
        int minI = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(mA.get(mid) == target){
                minI = mid;
                high = mid-1;
            }else if(mA.get(mid) > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        if(minI != -1)
            return minI;
        
        low = pI+1, high = n-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(mA.get(mid) == target){
                minI = mid;
                high = mid-1;
            }else if(mA.get(mid) < target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        return minI;
    }