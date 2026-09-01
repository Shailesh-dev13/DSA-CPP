#include<bits/stdc++.h>
using namespace std;
//brute force approach-linear search
/*int findMin(vector<int>& nums){
    int min = INT_MAX;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<min){
            min=nums[i];
        }
    }
    return min;
}*/
//optimal solution with log n time complexcity using binary search
int findMin(vector<int>& nums){
    int st=0;
    int end=nums.size()-1;
    while(st<end){
        int mid=st+(end-st)/2;
        if(nums[mid]>nums[end]){
            st=mid+1;
            
        }else{
            end=mid;
        }
    }
    return nums[st];
}
int main(){
    vector<int> arr= {3,4,5,6,1,2};
    cout<<findMin(arr);
    return 0;
}