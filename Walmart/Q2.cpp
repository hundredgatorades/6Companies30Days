bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        int dp[n][n];
        for(int i=0;i<n;i++)
        {
            dp[i][i]=piles[i];
        }
        
        for(int i=0;i<n-1;i++)
        {
            dp[i][i+1]= max(piles[i],piles[i+1]);
        }
        
        for(int len=3;len<=n;len++)
        {
            for(int i=0;i<n;i++)
            {
                int j= len + i -1;
                if(i>=j || j>=n || i>=n) continue;
                int op1= piles[i] + min({ dp[i+1][j-1], dp[i+2][j]});
                int op2= piles[j] + min({dp[i+1][j-1], dp[i][j-2]});
                dp[i][j]= max(op1,op2);
                
            }
        }
        
        int sum=0;
        for(int i=0;i<n;i++) sum+=piles[i];
        int alice_s= dp[0][n-1];
        int bob_s= sum- alice_s;
        return alice_s>=bob_s;
       
    }