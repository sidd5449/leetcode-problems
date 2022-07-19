/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool preOrder(struct TreeNode* root, int* result, int* size)
{
    if (!root)
        return;
    result[(*size)++] = root->val;
    preOrder(root->left, result, size);
    preOrder(root->right, result, size);
}

bool findTarget(struct TreeNode* root, int k){
    int result[10001];
    int size = 0;
    preOrder(root, result, &size);
    
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if  (result[i] + result[j] == k)
                return true;
    
    return false;
}