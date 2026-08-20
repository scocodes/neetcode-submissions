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
    int depth(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        else
        {
            int rightDepth = depth(root->right);
            int leftDepth = depth(root->left);

            if(std::abs(rightDepth - leftDepth) > 1)
            {
                isTrue = false;
            }

            return 1 + std::max(rightDepth, leftDepth);
        }
    }
public:

    bool isTrue = true;
    bool isBalanced(TreeNode* root) 
    {
        depth(root);
        return isTrue;
    }
};
