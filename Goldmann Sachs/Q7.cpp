int distribute(int n, int m, int k)
{
    if((k+m)%n==0 && n!=1)
    {
        return n-1;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return ((k+m)%n)-1;
    }
}