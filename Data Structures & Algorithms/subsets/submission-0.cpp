class Solution 
{
    std::vector<vector<int>> result{};
    std::vector<int> current;

    void backtrack(std::vector<int>& nums, int start)
    {
        result.push_back(current);

        for(int i = start; i < nums.size(); i++)
        {
            current.push_back(nums[i]);

            backtrack(nums, i+1);

            current.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        backtrack(nums, 0);
        return result;
    }
};
