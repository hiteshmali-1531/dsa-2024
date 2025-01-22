#include<iostream>
using namespace std;

bool lenearSearch(int mat[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int diagonalSum(int mat[][3], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        // primary diagonal
        sum += mat[i][i];
        // secondary diagonal
        if(i!=n-i-1){
            sum+= mat[i][n-i-1];
        }
    }
    return sum;
}

// int diagonalSum(int mat[][3], int n){
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i==j){
//                 sum+= mat[i][j];
//             }else if(j== n-i-1){
//                 sum+= mat[i][j];
//             }
//         }
//     }

//     return sum;
// }

int maxRowSum(int mat[][3],int rows, int cols){
    int sum =INT_MIN;
    int maxSum = 0;
    for(int i=0;i<rows; i++){
        for(int j=0; j<cols; j++){
            sum += mat[i][j];
        }
        maxSum = max(maxSum, sum);
        sum = 0;
    }
    return maxSum;
}

int main(){
    int matrix[3][3] ;
    int rows = 3, cols = 3;

    //input 
    for(int i=0; i<rows;i++){
        for(int j=0; j<cols; j++){
            cin>>matrix[i][j];
        }
    }

    //output
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<maxRowSum(matrix,rows,cols)<<endl;
    cout<<diagonalSum(matrix, 3);


    return 0;
}