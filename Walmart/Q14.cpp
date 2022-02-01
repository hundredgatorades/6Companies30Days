class Solution
{
    public:
    //Function to find the largest number after k swaps.
    void helper(string s,int k,string &maxim,int c){
       if(k==0){
           return ;
       }
       int n=s.size();
       char maxi=s[c];
       for(int i=c+1;i<n;i++){
           if(s[i]>maxi){
               maxi=s[i];
           }
       }
       if(maxi!=s[c]){
           k--;
       }
       for (int j=n-1;j>=c;j--){
           if(s[j]==maxi){
               swap(s[c],s[j]);
               if(s.compare(maxim)>0){
                   maxim=s;
               }
               helper(s,k,maxim,c+1);
               swap(s[c],s[j]);
           }
       }
   }
    string findMaximumNum(string str, int k)
    {
       // code here.
       string maxi="";
       helper(str,k,maxi,0);
       return maxi;
       
    }
};