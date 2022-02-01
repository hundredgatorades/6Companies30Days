public:
    //Function to find list of all words possible by pressing given numbers.
    void solve(int i,string res,unordered_map<int,string> hmap,int a[],int N,vector<string> &ans){
        if(i>=N){
            ans.push_back(res);
            return;
        }
        int key = a[i];
        for(char ch:hmap[key]){
            res += ch;
            solve(i+1,res,hmap,a,N,ans);
            res.pop_back();
        }
    }   
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        unordered_map<int,string> um;
        um[1] = "";
        um[2] = "abc";
        um[3] = "def";
        um[4] = "ghi";
        um[5] = "jkl";
        um[6] = "mno";
        um[7] = "pqrs";
        um[8] = "tuv";
        um[9] = "wxyz";
        um[10] = "*";
        um[11] = "0";
        um[12] = "#";
        string res = "";
        vector<string> ans;
        solve(0,res,um,a,N,ans);
        return ans;
    }