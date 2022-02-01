bool cmp(string a,string b)
{
    if(a.size()==b.size())
    {
        int i=0;
        while(i<a.size())
        {
            if(a[i]!=b[i])
             return a[i]>b[i];
            i++;
        }
    }
    return a.size()>b.size();
}
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        return nums[k-1];
    }
};
