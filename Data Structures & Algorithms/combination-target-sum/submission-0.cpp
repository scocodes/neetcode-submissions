class Solution {
    std::vector<std::vector<int>> results{};
    std::vector<int> current{};

    void backtrack(vector<int>& nums, int start, int target)
    {
        for(int i = start; i < nums.size(); i++)
        {
            current.push_back(nums[i]);

            int newRemaining = target - nums[i];

            if(newRemaining > 0)
            {
                backtrack(nums, i, newRemaining);
            }
            else if(newRemaining == 0)
            {
                results.push_back(current);
            }

            current.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) 
    {
        backtrack(nums, 0, target);
        return results;
    }
};
