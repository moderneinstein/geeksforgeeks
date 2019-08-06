//similar to sum_of_leaf_nodes.cpp

int countLeaves(Node* root)
{
    if(!root)   return 0;
    if(!root->right && !root->left) return 1;
    
    int left = countLeaves(root->left);
    int right = countLeaves(root->right);
    
    return left+right;
}
