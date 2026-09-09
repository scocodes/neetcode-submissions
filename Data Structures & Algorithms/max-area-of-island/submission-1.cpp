class Solution 
{
     
    int maxArea{};
    int area{};

    void island(std::vector<std::vector<int>>& grid, int row, int col)
    {
        if(row < 0 || row >= grid.size() || col < 0 || col >= grid[0].size())
        {
            return;
        }

        if(grid[row][col] != 1)
        {
            return;
        }
        area++;
        grid[row][col] = 2;

        island(grid, row + 1, col);
        island(grid, row - 1, col);
        island(grid, row, col + 1);
        island(grid, row, col - 1);

    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {

        for(int row = 0; row < grid.size(); row++)
        {
            for(int col = 0; col < grid[0].size(); col++)
            {
                if(grid[row][col] == 1)
                {
                    island(grid, row, col);
                    maxArea = std::max(maxArea, area);
                    area = 0;
                }
            }
        }
        return maxArea;
        
    }
};
