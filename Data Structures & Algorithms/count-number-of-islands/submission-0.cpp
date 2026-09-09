class Solution 
{
    int result{};

    void island(std::vector<std::vector<char>>& grid, int row, int col)
    {
        if(row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size())
        {
            return;
        }

        if(grid[row][col] != '1')
        {
            return;
        }
        
        grid[row][col] = '#';
        island(grid, row + 1, col);
        island(grid, row - 1, col);
        island(grid, row, col + 1);
        island(grid, row, col - 1);

    }
    
public:
    int numIslands(vector<vector<char>>& grid) 
    {
        int islandCount{};

        for(int row = 0; row < grid.size(); row++)
        {
            for(int col = 0; col < grid[0].size(); col++)
            {
                if(grid[row][col] == '1')
                {
                    islandCount++;
                    island(grid, row, col);
                }
            }
        }
        return islandCount;
    }
};
