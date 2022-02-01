void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    map<char,int> m1,m2;
	    for(int i=0;i<n;i++)
	    {
	        if(m1.find(nuts[i])==m1.end())
	        {
	            m1.insert({nuts[i],1});
	        }
	        if(m2.find(bolts[i])==m2.end())
	        {
	            m2.insert({bolts[i],1});
	        }
	    }
	    int i;
	    map<char,int> :: iterator itr;
	    for(itr=m1.begin(),i=0;itr!=m1.end() && i<n;++itr,i++)
	    {
	        nuts[i]=itr->first;
	    }
	    map<char,int> :: iterator itr2;
	    for(itr2=m2.begin(),i=0;itr2!=m2.end() && i<n;++itr2,i++)
	    {
	        bolts[i]=itr2->first;
	    }
	}