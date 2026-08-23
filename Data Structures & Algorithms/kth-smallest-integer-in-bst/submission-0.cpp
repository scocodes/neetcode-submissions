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

class Solution 
{
    void helper(TreeNode* root, int k)
    {
        if(root == nullptr)
        {
            return;
        }
        helper(root->left, k);
        count++;
        if(count == k)
        {
            minNumber = root->val;
            return;
        }
        helper(root->right, k);

    }
public:
    int count{};
    int minNumber{};
    int kthSmallest(TreeNode* root, int k) 
    {
        helper(root, k);
        return minNumber;
    }
};
