#include<bits/stdc++.h>
using namespace std;
int findmaxConsecutiveOnes(vector<int>& nums){
    int maxi=0;//initialize the max count
    int cnt=0;//initialize current count 
    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){//if 1 found add to count
            cnt++;
            maxi=max(maxi,cnt);//store the max of both in maxi
        }else{
            cnt=0;//reset current count if 0 detected
        }
    }
    return maxi;
}
int main(){
    vector<int> arr = {1,1,0,0,0,1,1,1,1,0,1};
    cout<<findmaxConsecutiveOnes(arr);
}