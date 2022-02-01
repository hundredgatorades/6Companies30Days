string amendSentence (string s)
    {
        // your code here
        int n=s.length();
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(int(s[i])>=65 && int(s[i])<=90)
            {
                ans+=char(int(s[i])+32);
            }
            else
            {
                ans+=s[i];
            }
            if(i<n-1)
            {
                if(int(s[i+1])>=65 && int(s[i+1])<=90)
                {
                    ans=ans+" ";
                }
            }
        }
        return ans;
    }