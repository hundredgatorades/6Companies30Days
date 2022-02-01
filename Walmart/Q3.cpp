bool winnerOfGame(string c) {
        int n=c.length();
        int a_count=0, b_count=0;
        for(int i=0;i<n;i++)
        {
            if(c.substr(i,3)=="AAA")
            {
                a_count+=1;
            }
            else if(c.substr(i,3)=="BBB")
            {
                b_count+=1;
            }
            else
                continue;
        }
        if(a_count>b_count)
            return true;
        else
            return false;
    }