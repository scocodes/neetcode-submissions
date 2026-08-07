class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        std::unordered_map<std::string, std::vector<std::string>> seen;
        int index{};

        for(string& i : strs)
        {
            std::string tempWord = i;
            std::sort(tempWord.begin(), tempWord.end());
            seen[tempWord].push_back(i);
        }

        std::vector<std::vector<std::string>> output;

        for(auto& pair : seen)
        {
            output.push_back(pair.second);
        }    

        return output;
    
    }
};
