class Solution {
public:
    int res=0;
    int n;
    void dfs(vector<vector<int>>& isConnected,int node,vector<bool>& visited){
        visited[node]=1;
        for(int i=0;i<n;i++){
            if(isConnected[node][i]==1 && !visited[i]){
                dfs(isConnected,i,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        n=isConnected.size();
        vector<bool> visited(n+1,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(isConnected,i,visited);
                res++;
            }
        }
        return res;
    }
    
};