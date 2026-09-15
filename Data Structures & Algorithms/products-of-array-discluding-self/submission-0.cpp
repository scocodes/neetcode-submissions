class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int rightProduct = 1;
        int leftProduct = 1;

        std::vector<int> result(nums.size(), 1);
        
        for(int i = 0; i < nums.size(); ++i)
        {
            result[i] = leftProduct;
            leftProduct *= nums[i];
        }
        for(int i = nums.size() - 1; i >= 0; --i)
        {   
            result[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return result;
    }
};
