/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool preorder(struct TreeNode* root, int* result, int* size)
{
    if (!root)
        return;
    result[(*size)++] = root->val;
    preorder(root->left, result, size);
    preorder(root->right, result, size);
}

bool findTarget(struct TreeNode* root, int k){
    int result[10001];
    int size = 0;
    preorder(root, result, &size);
    
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if  (result[i] + result[j] == k)
                return true;
    
    return false;
}