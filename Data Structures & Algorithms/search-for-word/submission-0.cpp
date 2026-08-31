class Solution 
{
    bool result{};

    void search(std::vector<std::vector<char>>& board, std::string word, int row, int col, int wordIndex)
    {
        if(wordIndex == word.size())
        {
            result = true;                    
        }
        if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size())
        {
            return;   
        }
        if(board[row][col] != word[wordIndex])
        {
            return;
        }
        
        wordIndex += 1;

        char temp = board[row][col];
        board[row][col] = '#';
        
        search(board, word, row + 1, col, wordIndex);
        search(board, word, row - 1, col, wordIndex);
        search(board, word, row, col + 1, wordIndex);
        search(board, word, row, col - 1, wordIndex);
        board[row][col] = temp;
    }

public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) 
    {
        for(int row = 0; row < board.size(); row++)
        {
            for(int col = 0; col < board[0].size(); col++)
            {
                search(board, word, row, col, 0);
            }
        }
    
        return result;
    }
};
