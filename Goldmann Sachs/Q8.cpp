int CountWays(string str){
            int n = str.length();
		    const int mod = 1e9 + 7;
		        
		    if(str[0] == '0')
		        return 0;
		        
		    for(int i = 0; i < n-1; i++)
		    {
		        if(str[i] == '0' && str[i+1] == '0')
		            return 0;
		    }
		    
		    int dp[n+1] = {0};
		    dp[0] = 1;
		    for(int i = 0; i < n; i++) 
		    {
		        if(str[i] == '0')
		            continue;
		        dp[i+1] = (dp[i+1] + dp[i])%mod;
		        if(i != n-1)
		        {
		            if(str[i] == '1' || (str[i] == '2' && str[i+1] < '7'))
		                dp[i+2] = (dp[i+2] + dp[i])%mod;
		        }
		    }
		    return dp[n];
		}