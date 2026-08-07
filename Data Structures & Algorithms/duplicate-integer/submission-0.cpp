class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> list;
        for(int& i : nums)
        {
            if(list.find(i) != list.end())
            {
                return true;
            }

            list.insert(i);
                
        }
        return false;
    }
};