#include<bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums,int target){
    int st=0;
    int end=nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;

        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]<target){
            st=mid+1;
        }else{
            end=mid-1;
        }   
    }
    return st;
}
int main(){
    vector<int> arr={1,2,3,4,5,7};
    int target=2;
    int nums=searchInsert(arr,target);
    cout<<"position of target "<<nums;
    
    
    return 0;
}