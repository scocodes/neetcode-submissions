class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        std::size_t left{};
        std::size_t right = numbers.size() - 1;

        while(left < right)
        {
            int sum = (numbers[right] + numbers[left]);

            if(sum == target)
            {
                return std::vector<int>{static_cast<int>(left + 1), static_cast<int>(right + 1)};

            }
            else if(sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    return{};
    }
};
