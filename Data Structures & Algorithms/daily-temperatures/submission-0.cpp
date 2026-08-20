class Solution 
{
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        std::stack<int> temps{};
        std::vector<int>results (temperatures.size(), 0);

        for(int i = 0; i < temperatures.size(); i++)
        {
                int topNumber = i - temps.top();
                while(!temps.empty() && temperatures[i] > temperatures[temps.top()])
                {
                    int previousIndex = temps.top();
                    temps.pop();
                    results[previousIndex] = i - previousIndex;
                    
                }
                
                temps.push(i);
        }
    return results;
    }
};
