class Solution 
{
public:
    int characterReplacement(string s, int k) 
    {
        std::unordered_map<char, int> seen{};
        std::size_t right{};
        std::size_t left{};
        int maxFrequency{};
        int maxLength{};

        while(right < s.size())
        {
            seen[s[right]]++;
            maxFrequency = std::max(maxFrequency, seen[s[right]]);

            if((((right-left+1)-maxFrequency)) > k)
            {
                seen[s[left]]--;
                left++;
            }
            maxLength = std::max(maxLength, static_cast<int>((right-left+1)));
            right++;
        }
    return maxLength;
    }
};
