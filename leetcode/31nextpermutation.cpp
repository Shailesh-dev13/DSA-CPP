#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int>& nums){
    // find the pivot from where the permutation changes
int piv=-1;
for(int i=nums.size()-2;i>=0;i--){
    if(nums[i]<nums[i+1]){//iterate the loop from end and when the order changes 
        piv=i;//found the pivot
        break;
    }
}
if(piv==-1){//if no pivot found revrse the array
    reverse(nums.begin(),nums.end());
    return;
}
//find the right most elemnt greater than the pivot and swap it
for(int i=nums.size()-1;i>piv;i--){
    if(nums[i]>nums[piv]){
        swap(nums[i],nums[piv]);
        break;
    }
}
//reverse(nums.begin()+piv+1,nums.end());
int i=piv+1,j=nums.size()-1;
while(i<=j){
    swap(nums[i++],nums[j--]);//reverse the remain numbers in between
    
}


}
int main(){
    vector<int> arr={1,2,3,6,5};
    nextPermutation(arr);
    for(int x:arr){cout<<x<<" ";}
    return 0;
}