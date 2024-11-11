#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0] ;
        int mp = 0;

        for(int i=0; i<prices.size(); i++){
            if(prices[i]> bestBuy){
                mp = max(mp, prices[i]-bestBuy);

            }
            bestBuy = min(prices[i], bestBuy);
        }
        return mp;
    }

    double myPow(double x, int n) {
        long binForm = n;
        double ans =1;
        if(n<0){
            x = 1/x;
            binForm = -binForm;
        }
        while(binForm > 0){
            if(binForm %2 == 1){
                ans *= x;

            }
            x *= x;

            binForm /= 2;
        }
        return ans;

    }
int main(){
    vector<int> vec = {7,1,5,3,6,4};
    cout<<maxProfit(vec)<<endl;
    cout<<myPow(2,4);
    return 0;
}