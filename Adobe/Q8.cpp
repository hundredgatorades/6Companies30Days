int atoi(string str) {
        //Your code here
        int n=str.length();
        int num=0;
        char sign = '+';
        for(int i=0;i<n;i++)
        {
            if(isalpha(str[i]))
            {
                return -1;
            }
            else if(str[i] == '-')
            {
                sign = '-';
                continue;
            }
            else
            {
                int r = str[i] - '0';
                num = num * 10 + r;
            }
        }
        if(sign == '-')
            return -1 * num;
        return num;
    }