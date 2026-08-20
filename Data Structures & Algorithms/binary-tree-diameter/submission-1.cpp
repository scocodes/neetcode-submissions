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
    int depth(TreeNode* node)
    {
        if(node == nullptr)
        {
            return 0;
        }
        else
        {
            int rightDepth = depth(node->right);
            int leftDepth = depth(node->left);

            maxDiameter = std::max((rightDepth+leftDepth), maxDiameter);

            return 1 + std::max(rightDepth, leftDepth);
        }
    }
public:
    int maxDiameter{};
    int diameterOfBinaryTree(TreeNode* root) 
    {
        depth(root);
        return maxDiameter;
    }
};
