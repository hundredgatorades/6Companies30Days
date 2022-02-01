class Solution {
public:
    int dp[1001][1001];
    int util(vector<int>&a,int i,int j,int n)
    {
        if(i>j)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        return dp[i][j]=max(a[i]+min(util(a,i+2,j,n),util(a,i+1,j-1,n)),a[j]+min(util(a,i+1,j-1,n),util(a,i,j-2,n)));
    }
    int maxCoins(vector<int>&A,int n)
    {
	    //Write your code here
	    memset(dp,-1,sizeof(dp));
        return util(A,0,n-1,n);
    }
};