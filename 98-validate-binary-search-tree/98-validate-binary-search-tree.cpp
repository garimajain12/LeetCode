/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void valid(TreeNode* root, long min, long max, bool &nums){
        if(root->val<=min || root->val>=max) {
            nums=false;
            return;
        }
        if(root->left){
            valid(root->left, min, root->val, nums);
            
        }
        if(root->right){
            valid(root->right, root->val, max, nums);
        }
    }
    bool isValidBST(TreeNode* root) {
     long min=LONG_MIN;
        long max=LONG_MAX;
        bool nums=true;
        valid(root,min,max,nums);
        return nums;
    }
};