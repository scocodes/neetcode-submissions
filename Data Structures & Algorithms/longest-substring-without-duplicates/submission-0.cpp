class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        std::size_t left{};
        std::size_t right{};

        std::unordered_set<char> seen{};

        int maxLength{};

        while(right < s.size())
        {
            if(seen.find(s[right]) == seen.end())
            {
                seen.insert(s[right]);
                maxLength = std::max(maxLength, static_cast<int>(right-left +1));
                right++;
            }
            else
            {
                seen.erase(s[left]);
                left++;
            }
        }
    return maxLength;
    }
};
