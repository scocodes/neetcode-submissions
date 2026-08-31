class Solution 
{
    std::vector<int> current{};
    std::vector<std::vector<int>> results{};
    std::vector<bool> used{};

    void backtrack(std::vector<int>& nums)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            if(current.size() == nums.size())
            {
                results.push_back(current);
                return;
            }
            if(used[i])
            {
                continue;
            }
            current.push_back(nums[i]);
            used[i] = true;

            backtrack(nums);

            current.pop_back();
            used[i] = false;

            
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        used = std::vector<bool>(nums.size(), false);
        backtrack(nums);
        return results;
    }
};
