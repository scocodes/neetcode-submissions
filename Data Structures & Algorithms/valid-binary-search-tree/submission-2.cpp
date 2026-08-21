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
    bool valid(TreeNode* root, long long lowerBound, long long upperBound)
    {
        if(root == nullptr)
        {
            return true;
        }
        else if(root->val <= lowerBound || root->val >= upperBound)
        {
            return false;
        }

        return valid(root->right, root->val, upperBound) && valid(root->left, lowerBound, root->val);
    }
public:
    long long lower = LLONG_MIN;
    long long upper = LLONG_MAX;

    bool isValidBST(TreeNode* root) 
    {
        return valid(root, lower, upper);
    }
};
