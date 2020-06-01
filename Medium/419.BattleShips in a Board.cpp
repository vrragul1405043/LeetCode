class Solution {
public:
    int countBattleships(vector<vector<char> >& board)
    {
        int number_of_battleships = 0;

        int R = board.size();
        int C = board[0].size();

        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                if (board[i][j] == '.')
                    continue;

                if (i > 0 && board[i - 1][j] == 'X')
                    continue;

                if (j > 0 && board[i][j - 1] == 'X')
                    continue;

                ++number_of_battleships;
            }
        }
        return number_of_battleships;
    }
};