void rotate(vector<vector<int> >& v)
{
    // Your code goes here
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            swap(v[j][i],v[n-j-1][i]);
        }
    }
}