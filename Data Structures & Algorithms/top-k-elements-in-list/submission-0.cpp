class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        std::unordered_map<int, int> seen;

        for(int& i : nums)
        {
            seen[i]++;
        }    

        
        std::vector<std::pair<int, int>> outputPairs;

        for(auto& pair : seen)
        {
            outputPairs.push_back(pair);
        }

        std::sort(outputPairs.begin(), outputPairs.end(), [](const auto& pair1, const auto& pair2)
        {
            return pair1.second > pair2.second;
        });

        std::vector<int> output;
        for(int i = 0; i < k; i++)
        {
            output.push_back(outputPairs[i].first);
        }   

        return output;

    }
};
