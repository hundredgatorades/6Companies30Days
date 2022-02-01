string FirstNonRepeating(string A){
		    // Code here
		    stack<char> s1;
		    deque<char> q; 
		    map<char, int> m;
		    int charcount[26]={0};
		    string ans="";
		    int n=A.length();
		    int count=0;
		    for(int i=0;i<n;i++)
		    {
		        /*if(m.find(A[i])==m.end())
		        {
		            q.push_back(A[i]);
		            m.insert({A[i],1});
		            ans=ans+q.front();
		        }
		        else
		        {
		            m[A[i]]++;
		            while(!q.empty())
		            {
		                if(m[q.front()]==1)
		                {
		                    ans+=q.front();
		                    count++;
		                    break;
		                }
		                else
		                {
		                    q.pop_front();
		                }
		            }
		            if(count==0)
    	            {
    	                ans+="#";
    	            }
    	            else
    	            {
    	                count=0;
    	            }
		            
		        }*/
		        q.push_back(A[i]);
		        charcount[A[i]-'a']++;
		        while(!q.empty())
	            {
	                if(charcount[q.front()-'a']<=1)
	                {
	                    ans+=q.front();
	                    count++;
	                    break;
	                }
	                else
	                {
	                    q.pop_front();
	                }
	            }
	            /*if(count==0)
	            {
	                ans+="#";
	            }
	            else
	            {
	                count=0;
	            }*/
	            if(q.empty())
	            {
	                ans+="#";
	            }
		        
		        
		    }
		    return ans;
		}
