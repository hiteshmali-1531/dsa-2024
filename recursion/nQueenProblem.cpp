#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<string>& board, int row, int j, int n){
        for(int i=0; i<n; i++){
            if(board[row][i] == 'Q'){
                return false;
            }
            if(board[i][j] == 'Q'){
                return false;
            }

        }

        for(int i=row, c = j; i>=0 && c>=0; i--,c--){
            if(board[i][c] == 'Q'){
                return false;
            }


        }
        for(int i=row, c=j; i>=0&&c<n; i--,c++){
            if(board[i][c] == 'Q'){
                return false;
            }

        }
        for(int i=row, c=j; i<n &&c>n; i++,c++){
            if(board[i][c] == 'Q'){
                return false;
            }
        }
        for(int i=row, c=j; i<n &&c>=0; i++, c--){
            if(board[i][c] == 'Q'){
                return false;
            }
        }

        return true;
    }
    void recursiveNQueens(vector<string>& board, int row, int n, vector<vector<string>>& ans){
        if(row == n){
            ans.push_back({board});
            return ;
        }
        for(int j=0; j<n; j++){
            if(isSafe(board, row, j, n)){
                board[row][j] = 'Q';
                recursiveNQueens(board, row+1, n, ans);
                board[row][j] = '.';
            }
        }
        
    }

int main(){

    return 0;
}