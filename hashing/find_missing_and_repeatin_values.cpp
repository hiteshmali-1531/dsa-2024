#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    unordered_set<int> s;
    vector<int> ans;
    int expectedSum =0;
    int actualSum = 0;
    int n = grid.size();
    int a = -1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            actualSum += grid[i][j];
            if(s.find(grid[i][j]) != s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expectedSum = (n*n)*(n*n+1)/2;
    int b = expectedSum + a - actualSum; 
    ans.push_back(b);
    return ans;
}
int main(){
    return 0;
}