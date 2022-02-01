class Solution
{
    public:
    string s="";
    int copen(string s)
    {
        int cofopen=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                cofopen++;
        }
        return cofopen;
    }
    int cclose(string s)
    {
        int cofclose=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==')')
                cofclose++;
        }
        return cofclose;
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
    }
};