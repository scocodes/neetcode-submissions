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
    vector<int> rightSideView(TreeNode* root) 
    {
        std::queue<TreeNode*> q{};
        std::vector<int> output{};
        if(root != nullptr)
        {
            q.push(root);
        }

        while(!q.empty())
        {   
            int size = q.size();

            for(int i = 0; i < size; i++)
            {
                TreeNode* current = q.front();
                q.pop();
            
                if(i == (size - 1))
                {
                    output.push_back(current->val);
                }

                if(current->left != nullptr)
                {
                    q.push(current->left);
                }

                if(current->right != nullptr)
                {
                    q.push(current->right);
                }
            }
        }

    return output;
    }
};
