int cnt, target;
int Sum(Node* root)
{
    if(!root)
    return 0;
    
    int sumofnodes = root->data + Sum(root->left) + Sum(root->right);
    if(sumofnodes == target)
        cnt++;
    
    return sumofnodes;
}
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	cnt = 0;
	target = X;
	Sum(root);
	return cnt;
}
    