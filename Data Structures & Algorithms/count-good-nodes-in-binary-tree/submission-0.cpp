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
public:
    void helper(TreeNode* root, int maxSoFar)
    {
        if(root != nullptr)
        {
            if(root->val >= maxSoFar)
            {
                maxSoFar = std::max(maxSoFar, root->val);
                total++;
            }

            helper(root->right, maxSoFar);
            helper(root->left, maxSoFar);
        }
    }
    int total{};

    int goodNodes(TreeNode* root) 
    {
        total++;

        int maxSoFarRight = root->val;
        int maxSoFarLeft = root->val;

        helper(root->right, maxSoFarRight);
        helper(root->left, maxSoFarLeft);

        return total;
    }
};
