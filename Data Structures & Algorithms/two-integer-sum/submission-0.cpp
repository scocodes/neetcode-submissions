class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        std::unordered_map<int, int> seen;
        int index{};

        for(int& i : nums)
        {
            int new_target = target - i;
            if(seen.find(new_target) != seen.end())
            {
                return std::vector<int> {seen[new_target], index};
            }
            seen.insert({i, index}); // num, 0
            index++;
        }

    }
};

