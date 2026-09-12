#include<bits/stdc++.h>
using namespace std;
//brute force
/*int singleNonDuplicate(vector<int>& nums){
    int ans=0;
    for(int val:nums){
        ans=ans^val;
    }
    return ans;
}*/
//optimal using binary search
    int singleNonDuplicate(vector<int>&  nums){
    if(nums.size()==1) return nums[0];//edge case if 1 element is present
    if(nums[0]!=nums[1])return nums[0];//edge case if first element is unique
    if(nums[nums.size()-1]!=nums[nums.size()-2])return nums[nums.size()-1];//edge case if last element is unique
    int st=1;//skip the first and last element and initialize the corner elements
    int end= nums.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){//check if mid is unique
            return nums[mid];
        } 
        // odd || even
        if((mid%2==1 && nums[mid]==nums[mid-1]||mid%2==0 && nums[mid]==nums[mid+1])){//if mid is in left half
            st=mid+1;//check right 
        }else{// mid is in right half
            end=mid-1;//check left
        }
    }
    return -1;
    }


int main(){
        vector <int> arr={1,1,2,3,3,4,4,8,8};
        cout<<singleNonDuplicate(arr);
        return 0;
    }