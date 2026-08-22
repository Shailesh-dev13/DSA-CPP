#include<bits/stdc++.h>
using namespace std;
//using binary search
int searchInsert(vector<int>& nums,int target){
    int st=0;
    int end=nums.size()-1;
    while(st<=end){
        int mid = st+(end-st)/2;//find mid

        if(nums[mid]==target){//return mid
            return mid;
        }else if(nums[mid]<target){//check the right half
            st=mid+1;
        }else{
            end=mid-1;//check the left half
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