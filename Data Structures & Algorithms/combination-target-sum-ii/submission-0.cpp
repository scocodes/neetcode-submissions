class Solution 
{
    std::vector<int> current{};
    std::vector<std::vector<int>> results{};


    void backTrack(std::vector<int>& candidates, int target, int start)
    {
        for(int i = start; i < candidates.size(); i++)
        {
            if(i > start && candidates[i] == candidates[i-1])
            {
                continue;
            }

            current.push_back(candidates[i]);

            int remaining = target - candidates[i];

            if(remaining == 0)
            {
                results.push_back(current);
            }
            else if(remaining > 0)
            {
                backTrack(candidates, remaining, i + 1);
            }

            current.pop_back();
        }
        

    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        std::sort(candidates.begin(), candidates.end());
        backTrack(candidates, target, 0);
        return results;
    }
};
