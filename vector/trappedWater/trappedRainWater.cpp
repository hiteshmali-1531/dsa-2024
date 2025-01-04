#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height) {
        vector<int>leftMax(height.size(),0) ;
        vector<int>rightMax(height.size(),0);
        leftMax[0] = 0;
        int maxLeft = INT_MIN;
        int maxRight = INT_MIN;
        leftMax[0] = height[0];
        for(int i=1; i<height.size(); i++){
            leftMax[i] = max(height[i], leftMax[i-1]);
        }
        rightMax[height.size()-1] = height[height.size()-1];
        for(int i = height.size()-2; i>=0; i--){
            rightMax[i] = max(height[i], rightMax[i+1]);
        }
        int trappedWater=0;
        
        for(int i=0 ; i<height.size(); i++){
            int waterLevel = min(leftMax[i], rightMax[i]);
            if(waterLevel - height[i]>0){
            trappedWater += (waterLevel - height[i]);
            }
        }

        return trappedWater;
    }

int main(){
    vector<int> height = {4,2,0,3,2,5};
    cout<<trap(height);
    return 0;
}
