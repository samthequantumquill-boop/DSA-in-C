/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int height(struct TreeNode* root){
    if(!root)return 0;
    int left = height(root->left);
    int right = height(root->right);
    return (left>right?left:right)+1;
 }
int diameterOfBinaryTree(struct TreeNode* root) {
if(!root) return 0;
int left = diameterOfBinaryTree(root->left);
int right = diameterOfBinaryTree(root->right);
int lh = height(root->left);
int rh = height(root->right);
int mid = lh+rh;
int max = left;
if(right>max) max = right;
if(mid>max) max = mid;
return max;
}
