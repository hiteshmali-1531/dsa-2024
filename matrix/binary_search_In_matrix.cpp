#include<iostream>
#include<vector>
using namespace std;

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