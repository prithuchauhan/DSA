// Question Link :   https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool checkRow(vector<char> v) {

        vector<int> cnt(9, 0);

        for (char iter : v) {
            if (isdigit(iter)) {
                cnt[iter - '1']++;
                if (cnt[iter - '1'] > 1) {
                    return false;
                }
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        int rows = board.size();

        for (int i = 0; i < rows; i++) {
            if (!checkRow(board[i])) {
                return false;
            }
        }

        int cols = board[0].size();

        for (int i = 0; i < cols; i++) {
            vector<int> cntv(9, 0);
            for (int j = 0; j < 9; j++) {
                if (isdigit(board[j][i])) {
                    cntv[board[j][i] - '1']++;
                    if (cntv[board[j][i] - '1'] > 1) {
                        return false;
                    }
                }
            }
        }

        int row = 0;
        int col = 0;
        

        

for (int row = 0; row < 9; row += 3) {
        for (int col = 0; col < 9; col += 3) { 

            vector<int> cntsq(9, 0);

            for (int r = row; r < row + 3; r++) {
                for (int c = col; c < col + 3; c++) {
                    if (isdigit(board[r][c])){

                    
                    
                        cntsq[board[r][c] - '1']++;
                        if (cntsq[board[r][c] - '1'] > 1) {
                            return false;
                            }

                
                        }

                    }
                }
            }
        }

        return true;
    }
};
