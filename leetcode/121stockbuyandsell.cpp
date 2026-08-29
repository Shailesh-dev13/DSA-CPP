#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices){
int maxProfit=0,bestBuy=prices[0];//initialize maxprofit =0 and bestbuy at the starting index
for(int i=1;i<prices.size();i++){//iterate through the array 
    if(prices[i]>bestBuy){//if current price is greater than bestbuy
        maxProfit=max(maxProfit,prices[i]-bestBuy);//calculate the profit by comparing both 
        //previous profits and current profits and store maximum
    }
    bestBuy=min(bestBuy,prices[i]);//update bestbuy with minimum of the current and previous buy
}
return maxProfit;
}
int main (){
    vector <int> prices ={7,1,3,4,6,8};
    cout<<maxProfit(prices)<<endl;
    return 0;
}