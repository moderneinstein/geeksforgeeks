int sumOfLeafNodes(Node *r ){     
     if(!r) return 0;
     
     if(!r->left && !r->right)  return r->data;
     
     int left = sumOfLeafNodes(r->left);
     int right = sumOfLeafNodes(r->right);
     
     return left+right;
}
