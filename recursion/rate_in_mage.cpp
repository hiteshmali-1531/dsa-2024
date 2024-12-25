#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>>& maz, int r, int c, vector<string>& ans, string path,vector<vector<bool>>& visited){
    int n = maz.size();
    if(r>=n || c>=n ||r<0 ||c<0||visited[r][c] || maz[r][c] == 0){
        return ;
    }

   

    if(r == n-1 && c == n-1){
        ans.push_back(path);
        return ;
    }

     visited[r][c] = true;

    helper(maz, r+1,c,ans , path+"D",visited); // down
    helper(maz,r, c+1, ans, path+"R", visited); // right
    helper(maz,r-1,c,ans, path+"U", visited); // up
    helper(maz,r, c-1,ans, path+"L", visited); // left

    visited[r][c] = false;


}

void helper(vector<vector<int>>& maz, int r, int c, vector<string>& ans, string path){
    int n = maz.size();
    if(r>=n || c>=n ||r<0 ||c<0|| maz[r][c] == 0){
        return ;
    }

   

    if(r == n-1 && c == n-1){
        ans.push_back(path);
        return ;
    }

     maz[r][c] = 0;

    helper(maz, r+1,c,ans , path+"D"); // down
    helper(maz,r, c+1, ans, path+"R"); // right
    helper(maz,r-1,c,ans, path+"U"); // up
    helper(maz,r, c-1,ans, path+"L"); // left

    maz[r][c] = 1;


}

vector<string> solveMaz(vector<vector<int>>& maz){
    string path = "";
    vector<vector<bool>> visited(maz.size(), vector<bool>(maz.size(), false));
    vector<string> ans;
    helper(maz,0,0, ans, path,visited);
    return ans;

}

int main(){
    vector<vector<int>> vec = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    vector<string> ans = solveMaz(vec);
    for(string val : ans){
        cout<<val<<endl;
    }
    return 0;
}