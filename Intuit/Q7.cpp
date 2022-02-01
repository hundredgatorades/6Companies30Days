class Solution {
public:
    int p(vector<int>& weights, int cap){
        
        int count=0;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            
            if(sum+weights[i]>cap){
                count++;
                sum=0;
            }
                
            sum=sum+weights[i];
        }
          if(sum>0) count++;
        return count;
        
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n=weights.size();
        
          int v=0,s=0;
        
          for(int i=0;i<weights.size();i++){
            v=max(v,weights[i]);
              s=s+weights[i];
          }
        
        int l=v,r=s;
        
        while(l<=r){
            
            int mid=l+(r-l)/2;
            
            int q=p(weights,mid);
            
            if(q<=days&&(mid==v||p(weights,mid-1)>days)) 
                return mid; 
            
            else if(q>days) 
                l=mid+1;
            else 
                r=mid-1;
         }
        return 1;
        
    }
    
};