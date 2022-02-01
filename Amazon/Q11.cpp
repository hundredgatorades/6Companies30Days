void in(Node *root, vector<int>&v)
    {
        if(root==NULL)
        {
            v.push_back(int(NULL));
            return;
        }
            
        v.push_back(root->data);
        in(root->left,v);
        
        in(root->right,v);
        
        return;
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> v;
        in(root,v);
        return v;
        
    }
    
    //Function to deserialize a list and construct the tree.
    int idx=0;
    Node * deSerialize(vector<int> &a)
    {
       if((a.size()-1)<idx||a[idx]==NULL)
       {
           idx++;
           return NULL;
       }
       Node*root=new Node(a[idx++]);
       root->left=deSerialize(a);
       root->right=deSerialize(a);
       return root;
    }