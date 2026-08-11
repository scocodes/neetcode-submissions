class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> output;

        for(int i = 0; i < nums.size() - 2; i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            std::size_t right = nums.size() - 1;
            std::size_t left = i + 1;

            while (left < right)
            {

                int sum = nums[right] + nums[left];
                if((nums[i] + sum) == 0)
                {
                    output.push_back({nums[i], nums[right], nums[left]});
                    right--;
                    left++;

                    while (left < right && nums[left] == nums[left -1])
                    {
                        left++;
                    }
                    
                    while (left < right && nums[right] == nums[right +1])
                    {
                        right--;
                    }
                
                }

                else if(nums[i]+sum > 0)
                {
                    right--;
                }
                else if(nums[i]+sum < 0)
                {
                    left++;
                }
            }
        }

    return output; 
    }
};
