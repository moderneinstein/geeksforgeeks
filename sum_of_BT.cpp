long int sumBT(Node* root)
{
    if(!root)   return 0;
    return (root->key + sumBT(root->right) + sumBT(root->left));
}
