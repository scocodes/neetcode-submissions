
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        std::unordered_map<char, int> seen;
        if(s.size() != t.size())
        {
            return false;
        }

        for(char& i : s)
        {
            seen[i]++;

        }

        for(char& j : t)
        {
            seen[j]--;

            if(seen[j] < 0)
            {
                return false;
            }
        }
        return true;

    }
};
