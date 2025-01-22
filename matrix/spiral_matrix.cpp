#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int m = matrix.size();
    int n = matrix[0].size();
    int sr = 0,  er = m-1;
    int sc = 0,  ec = n-1;
    int idx = 0;
    while(sr<=er && sc<=ec){
        //top
        for(int i = sc; i<=ec; i++){
            result.push_back(matrix[sr][i]);
            
        }
        //right
        for(int i = sr+1; i<=er ; i++){
            result.push_back(matrix[i][ec]);
            
        }
        //bottom
        for(int i = ec-1; i>=sc; i--){
            if(sr==er){
                break;
            }
            result.push_back(matrix[er][i]);
            
        }
        //left
        for(int i = er-1; i>sr; i--){
            if(sc==ec){
                break;
            }
            result.push_back(matrix[i][sc]);
            
        }
        sr++;
        sc++;
        er--;
        ec--;
    }
    return result;
}

int main(){
    vector<vector<int>> mat = {{1,2,3}, {4,5,6},{7,8,9}};
    vector<int> res = spiralOrder(mat);
    for(int val : res){
        cout<<val<<" ";
    }
    return 0;
}