class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    bool isPath(int startNode, int desNode, vector<int> adj[], vector<int> &isVisited){
        if(startNode == desNode){
            return true;
        }
        isVisited[startNode] = true;
        for(int node: adj[startNode]){
            if(!isVisited[node]){
                if(isPath(node, desNode, adj, isVisited)){
                    return true;
                }
            }
        }
        return false;
   }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
       vector<int> isVisited(V, false);
       vector<int> adj2[V];
       for(int i = 0; i < V; i++){
           for(int val : adj[i]){
               if((i == c && val == d) || (i == d && val == c)){
                   continue;
               }
               adj2[i].push_back(val);
         }
       }
       bool bl = isPath(c, d, adj2, isVisited);
       
       return !bl;
    }
    
   
};
