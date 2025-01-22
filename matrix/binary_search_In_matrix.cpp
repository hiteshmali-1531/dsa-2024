#include<iostream>
#include<vector>
using namespace std;


 bool searchMatrix(vector<vector<int>>& matrix, int target) { //240. Search a 2D Matrix II  // staircaseSearch Algos
        int m = matrix.size();
        int n = matrix[0].size();
        int r=0;
        int c=n-1;
        while(c>=0 && r<m){
            if(matrix[r][c] == target){
                return true;
            }else if(target<matrix[r][c]){
                c--;
            }else{
                r++;
            }
        }
        return false;
    }


    //74. Search a 2D Matrix

 bool binarySearch(vector<vector<int>>& matrix, int midRow, int target){//logn      
        int stCol = 0;
        int endCol = matrix[midRow].size()-1;
        while(stCol<=endCol){
            int midCol = stCol+(endCol-stCol)/2;
            if(target == matrix[midRow][midCol]){
                return true;
            }else if(target<matrix[midRow][midCol]){
                endCol = midCol-1;
            }else{
                stCol = midCol+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {// logm
        int stRow = 0;
        int endRow = matrix.size()-1;
        while(stRow<=endRow){
            int midRow = stRow + (endRow-stRow)/2;
            if(target>=matrix[midRow][0]&&target <= matrix[midRow][matrix[midRow].size()-1]){
                return binarySearch(matrix, midRow, target);
            }else if(target<matrix[midRow][0]){
                endRow = midRow-1;
            }else{
                stRow = midRow+1;
            }
        }
        return false;
    }

int main(){
    return 0;
}