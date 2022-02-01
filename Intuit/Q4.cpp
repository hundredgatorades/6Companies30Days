string findMaximumNum(string str, int kmain)
    {
       // code here.
       if(kmain==0)
            return str;
        string s=str;
        string s1=str;
       int k=kmain, k1=kmain;
       int n=s.length();
       int pos, pos1;
       int lar=INT_MIN, lar1=INT_MIN;
       
       for(int j=0;j<n;j++)
       {
           pos=j;
           lar=s[j]-'0';
           for(int i=j;i<n;i++)
           {
               int num=s[i]-'0';
               if(num>=lar)
               {
                   lar=num;
                   pos=i;
               }
               //lar=max(lar,num);
           }
           if(pos!=j)
           {
               
               if(s[pos]-'0'==s[j]-'0')
               {
                   continue;
               }
               else
               {
                   swap(s[j],s[pos]);
                   k--;
                   if(k<=0)
                   {
                       break;
                   }
               }
               
           }
           
       }
       
       for(int j=0;j<n;j++)
       {
           pos1=j;
           lar1=s1[j]-'0';
           for(int i=j;i<n;i++)
           {
               int num=s1[i]-'0';
               if(num>lar1)
               {
                   lar1=num;
                   pos1=i;
               }
               //lar=max(lar,num);
           }
           if(pos1!=j)
           {
               
               if(s1[pos1]-'0'==s1[j]-'0')
               {
                   continue;
               }
               else
               {
                   swap(s1[j],s1[pos1]);
                   k1--;
                   if(k1<=0)
                   {
                       break;
                   }
               }
               
           }
           
       }
       for(int i=0;i<n;i++)
       {
           int x=s[i]-'0';
           int y=s1[i]-'0';
           if(x>y)
           {
               return s;
           }
           else if(y>x)
           {
               return s1;
           }
           else
                continue;
       }
       //if(x>=y)
        return s;
        //else
            //return s1;
       
       
    }