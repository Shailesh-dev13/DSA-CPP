//kadane's approach to calculate sum of all the subarrays of an array and find the maximum sum among them
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>num={-2,1,-3,4,-1,2,1,-5,4};
    int currSum=0;
    int maxSum=INT_MIN;
    for(int val:num){
        currSum+=val;
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
        
    }
   cout<< maxSum;
   return 0;
}