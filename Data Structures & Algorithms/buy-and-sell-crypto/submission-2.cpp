class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        std::size_t right = 1;
        std::size_t left{};
        int maxiProfit{};

        while (right < prices.size())
        {
            int profit{};

            if(prices[right] < prices[left])
            {
                left = right;
            }

            else if(prices[left] < prices[right])
            {
                profit = (prices[right] - prices[left]);
                right++;
            }

            else
            {
                profit = 0;
                right++;
            }

            maxiProfit = std::max(maxiProfit, profit);
        }

    return maxiProfit;
    }
};
