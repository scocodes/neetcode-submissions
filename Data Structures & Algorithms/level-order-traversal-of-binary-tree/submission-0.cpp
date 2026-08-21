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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        std::queue<TreeNode*> q{};
        std::vector<std::vector<int>> output{};
        if(root != nullptr)
        {
            q.push(root);
        }

        while(!q.empty())
        {

            std::vector<int> loopOutput{};
            int currentSize = q.size();

            for(int i = 0; i < currentSize; i++)
            {

                TreeNode* current = q.front();
                q.pop();

                loopOutput.push_back(current->val);
                if(current->left != nullptr)
                {
                    q.push(current->left);
                }
                if(current->right != nullptr)
                {
                    q.push(current->right);
                }
            }

            output.push_back(loopOutput);
        }
        return output;
    }
};
