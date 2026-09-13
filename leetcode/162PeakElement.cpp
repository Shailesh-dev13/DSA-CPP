#include<bits/stdc++.h>
using namespace std;
//brute force approach
/*int findPeakElement(vector<int>& nums){
    int peak=0;
 for(int i=1;i<nums.size()-1;i++){
     if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
           peak=i;
     }
 }
 return peak;
}*/
/*for(int i=0;i<n;i++){
bool left=(i==0)|| (nums[i]>= nums[i-1]);
bool right=(i==n-1)||(nums[i]>=nums[i+1]);
if(left && right) return i;}*/
//optimal approach using Binary Search
int findPeakElement(vector<int>& nums){
    int st=0,end=nums.size()-1;
    while(st<end){
        int mid=st+(end-st)/2;//find mid point
        if( nums[mid]>nums[mid+1]){//check if the mid element is greater than its next element
           end = mid;//if yes then search the left half
        }else{//if no ,then search the right half
            st=mid+1;
        }
    }
    return st;//return peak
}
int main(){
    vector<int> arr={8,2,3,4,5,6,7};
    int ans=findPeakElement(arr);
    cout<<"The peak element is found at index: "<<ans<<endl;
    return 0;
}