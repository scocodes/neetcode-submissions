class Solution {
public:
    bool isPalindrome(string s) 
    {
        std::size_t left{};
        std::size_t right = s.size() - 1;

        while(left < right)
        {

            if(!std::isalnum(s[left]))
            {
                left++;
                continue;
            }
            else if(!std::isalnum(s[right]))
            {
                right--;
                continue;
            }

            if(std::tolower(s[left]) != std::tolower(s[right]))
            {
                return false;
            }
            
            left++;
            right--;

        }
        return true;
    }
};
