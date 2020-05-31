class Solution {
public:
    int islandPerimeter(vector<vector<int> >& grid)
    {

        int R = grid.size();
        int C = grid[0].size();

        if (!R || !C)
            return 0;

        int result = 0;

        for (int i = 0; i < R; ++i) {
            for (int j = 0; j < C; ++j) {
                if (grid[i][j] == 1) {
                    if (i == 0 || grid[i - 1][j] == 0)
                        ++result;
                    if (i == R - 1 || grid[i + 1][j] == 0)
                        ++result;
                    if (j == 0 || grid[i][j - 1] == 0)
                        ++result;
                    if (j == C - 1 || grid[i][j + 1] == 0)
                        ++result;
                }
            }
        }
        return result;
    }
};
