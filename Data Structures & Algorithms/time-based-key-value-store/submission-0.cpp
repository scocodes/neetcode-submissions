class TimeMap 
{
    struct Entry
    {
        int timestamp;
        std::string value;
    };

    std::unordered_map<std::string, std::vector<Entry>> data;

public:
    TimeMap(){}
    
    void set(string key, string value, int timestamp) 
    {
        data[key].push_back({timestamp, value});
    }
    
    string get(string key, int target) 
    {
        int left = 0;
        int right = data[key].size() - 1;

        std::string result = "";

        while(left <= right)
        {

            int mid = left + (right-left)/2;

            auto& entries = data[key];

            if(entries[mid].timestamp == target)
            {
                return entries[mid].value;
            }

            if(entries[mid].timestamp <= target)
            {
                result = entries[mid].value;
                left = mid + 1;
            }

            else
            {
                right = mid - 1;
            }



        }
        
        return result;
    }
};
