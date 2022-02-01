class Solution {
public:
    Node* search(vector<vector<int>>& grid,int s_i, int s_j, int size){
        if(size<1)return(NULL);
        bool va=grid[s_i][s_j];
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                if(grid[s_i+i][s_j+j]!=va){
                    size=size/2;
                    Node *M = new Node(true, false, NULL, NULL, NULL, NULL);
                    M->topLeft=search(grid,s_i,s_j,size);
                    M->topRight=search(grid,s_i,s_j+size,size);
                    M->bottomLeft=search(grid,s_i+size,s_j,size);
                    M->bottomRight=search(grid,s_i+size,s_j+size,size);
                    return(M);
                }
            }
        }
        return(new Node(va,true,NULL, NULL, NULL, NULL));
    }
    Node* construct(vector<vector<int>>& grid) {
         if(grid.size() == 0)return NULL;
        return(search(grid,0,0,grid.size()));
    }
    
};