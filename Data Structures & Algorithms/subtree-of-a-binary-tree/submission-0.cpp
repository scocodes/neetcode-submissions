class Solution 
{
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p == nullptr && q == nullptr)
        {
            return true;
        }
        else if(p == nullptr && q != nullptr || p != nullptr && q == nullptr)
        {
            return false;
        }
        else if(p->val != q->val)
        {
            return false;
        }
        return isSameTree(p->right, q->right) && isSameTree(p->left, q->left);
        
    } 

public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        
        if(root == nullptr || subRoot == nullptr)
        {
            return false;
        }
        else if(isSameTree(root, subRoot))
        {
            return true;
        }
        return isSubtree(root->right, subRoot) || isSubtree(root->left, subRoot);

    }
};
