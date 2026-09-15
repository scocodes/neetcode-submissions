class Solution 
{
public:

    string encode(vector<string>& strs) 
    {
        std::string result{};

        for(auto& st : strs)
        {
            std::string current{};
            current.append(std::to_string(st .size()));
            current.append("#");
            current.append(st);

            result.append(current);
        }

        return result;
    }

    vector<string> decode(string s) 
    {
        std::vector<std::string> result{};

        int i = 0;

        while(i<s.size())
        {
            int j = i;

            while(s[j] != '#')
            {
                j++;
            }

            int length = std::stoi(s.substr(i, j-i));

            std::string current = s.substr(j+1, length);
            result.push_back(current);

            i = j + length + 1;
        }

        return result;
    }
};
