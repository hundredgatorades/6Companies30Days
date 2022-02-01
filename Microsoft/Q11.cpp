vector<string> generate(int N)
{
	// Your code here
	int n=N;
	vector<string> v;
	int x=1;
	while(x<=n)
	{
	    string s="";
	    int i=x;
	    while(i!=0)
    	{
    	    int z=i&1;
    	    s=to_string(z)+s;
    	    i=i>>1;
    	}
    	
    	v.push_back(s);
    	x++;
	}
	return v;
}