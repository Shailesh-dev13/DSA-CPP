#include<bits/stdc++.h>
using namespace std;
//brute force
/*vector<int> searchRange(vector<int>& nums,int target){
    int n=nums.size();
    int last=-1;
    int first=-1;
    for(int i=0;i<n;i++ ){
        if(nums[i]==target){
            if(first==-1){
            first=i;
        }
        last=i;
    }
    }
    return {first,last};
}*/
//optimal approach-using binary search    
vector<int> searchRange(vector<int>& nums,int target){
int first=-1;
int last=-1;
//first occurence
int low=0;
int high=nums.size()-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(nums[mid]==target){//found the target but there maybe another in the left
        first=mid;//check left
        high=mid-1;
    }else if(nums[mid]<target){
        low=mid+1;
    }else{
        high=mid-1;
    }
}
//find last occurence
low=0;
high=nums.size()-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(nums[mid]==target){//found the target in right but there might be another in right
        last=mid;//check right
        low=mid+1;
    }else if(nums[mid]<target){
        low=mid+1;
    }else{
        high=mid-1;
    }
}
return {first,last};
}

int main(){
    vector<int> arr={1,2,2,2,3,4,5,6};
    int tar=2;
    vector<int>num=searchRange(arr,tar);
    for(int x:num){
        cout<<x<<" ";
    }
    return 0;
}