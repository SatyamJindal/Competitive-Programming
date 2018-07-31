bool hasPathSum(Node *node, int sum)
{
    if(node==NULL)
    {
        return (sum==0);
    }
    else
    {
        bool ans = 0;
        int subsum = sum - node->data;
        
        if(subsum==0 && node->left==NULL && node->right==NULL) return 1;
        
        if(node->left)
        {
            ans = ans|| hasPathSum(node->left,subsum);
        }
        if(node->right)
        {
            ans = ans|| hasPathSum(node->right,subsum);
        }
        return ans;
    }
}
