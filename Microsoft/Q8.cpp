void connect(Node *root)
    {
       // Your Code Here
       if(root==NULL) return; 
       queue<Node*> q;
       q.push(root);
       while(q.size())
       {
           int t = q.size();
           while(t--)
           {
               Node* curr = q.front();
               q.pop();
               if(t==0) 
                    curr->nextRight=NULL;
               else
               {
                    curr->nextRight=q.front();
               }
               
               if(curr->left) 
                    q.push(curr->left);
               if(curr->right) 
                    q.push(curr->right);   
           
           }
       }
    }    