class Solution 
{
public:
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int left{1};
        int right{};

        for(int& banana : piles)
        {
            right = std::max(banana, right);
        }

        while(left <= right)
        {
            int k = left + (right-left) / 2;
            long long time{};
            for(int pile : piles)
            {   
                time += std::ceil((static_cast<double>(pile) / k));
            }

            if(time > h)
            {
                left = k + 1;
            }
            else
            {
                right = k - 1;
            }
            
        }
    return left;
    }
};
