/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    struct TreeNode*new_node;
    if (numsSize==0) return NULL;
    new_node = malloc(sizeof(struct TreeNode));
    if (numsSize==1) {
        new_node->val =nums[0];
        new_node->right = NULL;
        new_node->left = NULL;
        return new_node;
    }
    new_node->left = sortedArrayToBST(nums,numsSize/2);
    new_node->val = nums[numsSize/2];
    new_node->right = sortedArrayToBST(nums+(numsSize/2)+1,numsSize-(1+(numsSize/2)));
    return new_node;
}