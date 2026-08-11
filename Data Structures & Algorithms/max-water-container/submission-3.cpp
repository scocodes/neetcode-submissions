class Solution 
{
public:
    int maxArea(vector<int>& heights) 
    {
        int maxArea{};
       
        std::size_t right = heights.size() - 1;
        std::size_t left = 0;
            

        while(left < right)
        {
            int area = std::min(heights[left], heights[right]) * (right-left);
            maxArea = std::max(area, maxArea);

            if(heights[left] < heights[right])
            {
                left++;
            }
            else if(heights[right] <= heights[left])
            {
                right--;
            }
        }
    
    return maxArea;
    }
};
