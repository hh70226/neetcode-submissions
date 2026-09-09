class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i < board.size(); i++){
            
            vector<int> row_entries(9, 0);
            vector<int> col_entries(9,0);
            vector<int> square_entries(9,0);
            auto [sq_row, sq_col] = div(i , 3);
            for(int j = 0; j < board[0].size(); j++){
                auto [jrow, jcol] = div(j, 3);
                if(board[i][j] != '.' ){
                    row_entries[board[i][j] - '1']++;
                }
                if(board[j][i] != '.'){
                    col_entries[board[j][i] - '1']++;
                }
                if(board[sq_row * 3 + jrow][sq_col*3 + jcol] != '.'){
                    square_entries[board[sq_row * 3 + jrow][sq_col*3 + jcol] - '1']++;
                }
            }

            for(int j = 0; j < row_entries.size(); j++){
                if(row_entries[j] > 1) return false; 
                if(col_entries[j] > 1) return false;
                if(square_entries[j] > 1) return false;
            }

        }
        return true;
    }
};
