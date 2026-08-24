#include<bits/stdc++.h>
using namespace std;
//brute force
/*
void solve(int arr[],int n){
    int temp[n];
    for(int i=1;i<n;i++){
        temp[i-1]=arr[i];
    }
    temp[n-1]=arr[0];

    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;  
}*/
//optimal approach
void rotateArrayByOne(vector<int>& nums){
    int temp=nums[0];//store the first index in the temporary variable
    for(int i=1;i<nums.size();i++){//iterate through the array
        nums[i-1]=nums[i];//shift the position of each element to the left by one
    }
    nums[nums.size()-1]=temp;//return the first index from them temporary variable to main array
}
int main(){
   vector<int> nums={1,2,3,4,5};
   rotateArrayByOne(nums);
   for(int num:nums){
    cout<<num<<" ";
   }
    return 0;
}