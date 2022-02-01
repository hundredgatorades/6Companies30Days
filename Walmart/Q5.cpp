class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int util(Node* root){
        if(root==NULL) 
            return 0;
        
         int leftSum= util(root->left);
         int rightSum=util(root->right);
         
         int x=root->data;
         int tsum=leftSum+rightSum;
         root->data=tsum;
         return tsum+x;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        util(node);
    }
};