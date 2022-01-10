string decodedString(string s){
        // code here
        int n=s.length();
        stack<char> stk;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=']')
            {
                stk.push(s[i]);
            }
            else
            {
                string temp="";
                while(!stk.empty() && stk.top()!='[')
                {
                    temp=stk.top()+temp;
                    stk.pop();
                }
                
                stk.pop();
                string num;
                while(!stk.empty() && isdigit(stk.top()))
                {
                    num=stk.top()+num;
                    stk.pop();
                }
                int count=stoi(num);
                string stringrep;
                for(int j=1;j<=count;j++)
                {
                    stringrep+=temp;
                }
                for(char c:stringrep)
                {
                    stk.push(c);
                }
            }
        }
        string res;
        while (!stk.empty()) 
        {
            res = stk.top() + res;
            stk.pop();
        }
        return res;
    }