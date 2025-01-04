#include<iostream>
#include<vector>
using namespace std;

bool helper(vector<vector<int>>& grid, int row, int col, int expVal){
    if(row<0 || col<0|| row>=grid.size() || col >= grid.size() || grid[row][col] != expVal){
        return false;
    }

    if(expVal == grid.size()*grid.size()-1){
        return true;
    }

    bool ans1 = helper(grid, row-2,col+1, expVal+1);
    bool ans2 = helper(grid, row-1, col+2, expVal+1);
    bool ans3 = helper(grid, row+1, col+2, expVal+1);
    bool ans4 = helper(grid, row+2, col+1, expVal+1);
    bool ans5 = helper(grid, row+2,col-1,expVal+1);
    bool ans6 = helper(grid, row+1, col-2, expVal+1);
    bool ans7 = helper(grid, row-1, col-2, expVal+1);
    bool ans8 = helper(grid, row-2, col-1, expVal+1);
    return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8;

}

bool checkValidGrid(vector<vector<int>>& grid) {
    return helper(grid, 0, 0, 0);
}


int main(){
    // vector<vector<int>> grid = {{0,11, 16, 5, 20},{17, 4, 19, 10, 15}, {12,1,8,21,6}, {3, 18, 23, 14,9},{24,13,2,7,22}};
    vector<vector<int>> grid = {{0,3, 6}, {5, 8,1}, {2,7,4}};
    cout<<checkValidGrid(grid);
    return 0;
}
