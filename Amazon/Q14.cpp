// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int timeburn(map<Node*, Node*> &m, Node* target)
    {
        queue<Node*> q;
        map<Node*, int> vis;
        vis[target]=1;
        q.push(target);
        int answer=0;
        while(!q.empty())
        {
            
            int sz = q.size();
            int fl=0;
            for(int i=0;i<sz;i++)
            {
                Node* fr=q.front();
                q.pop();
                if(fr->left && !vis[fr->left])
                {
                    vis[fr->left]=1;
                    fl=1;
                    q.push(fr->left);
                }
                if(fr->right && !vis[fr->right])
                {
                    vis[fr->right]=1;
                    fl=1;
                    q.push(fr->right);
                }
                if(m[fr] && !vis[m[fr]])
                {
                    vis[m[fr]]=1;
                    fl=1;
                    q.push(m[fr]);
                }
            }
            if(fl)
                answer++; 
        }
        
        return answer;
    }
    Node* bfs(Node* root, map<Node*, Node*> &m, int start)
    {
        queue<Node*> q;
        q.push(root);
        Node* ans;
        while(!q.empty())
        {
            Node* f=q.front();
            q.pop();
            if(f->data==start)
                ans=f;
            if(f->right)
            {
                m[f->right]=f;
                q.push(f->right);
            }
            if(f->left)
            {
                m[f->left]=f;
                q.push(f->left);
            }  
        }
        return ans;
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        map<Node*, Node*> m;
        Node* targetnode=bfs(root, m, target);
        int ans=timeburn(m,targetnode);
        return ans;
    }
};

// { Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
  // } Driver Code Ends