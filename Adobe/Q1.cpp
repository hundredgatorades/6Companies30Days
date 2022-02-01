vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        int beg=0, end=0, sum=0;
        
        while (end < n || sum >= s) 
        {
            if (sum < s) 
            { 
                sum += arr[end++]; 
            }
            else if (sum > s) 
            { 
                sum -= arr[beg++]; 
            }
            else 
            { 
                return vector<int>{beg+1, end}; 
            }
        }
        
        return vector<int>{-1};
    }