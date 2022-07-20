if(root == NULL)
return 0;
return max(maxDepth(root->left),maxDepth(root->right)) +1;