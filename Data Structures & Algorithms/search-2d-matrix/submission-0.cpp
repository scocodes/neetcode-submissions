class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int left = {};
        int numRows = static_cast<int>(matrix.size());
        int numCols = static_cast<int>(matrix[0].size());

        int right = numRows*numCols - 1;

        while(left <= right)
        {
            int middle = left + (right-left)/2;
            int midRow = middle/numCols;
            int midCol = middle%numCols;

            int middleValue = matrix[midRow][midCol];

            if(middleValue > target)
            {
                right = middle - 1;
            }
            else if(middleValue < target)
            {
                left = middle + 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
