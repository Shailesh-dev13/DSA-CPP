#include<bits/stdc++.h>
using namespace std;
/*int search(vector<int>& nums, int target) {
        int foundAt=-1;
     for(int i=0;i<nums.size();i++){
        if(nums[i]==target ){
            foundAt=i;
        }
     } 
     return foundAt;  
    }*/
    
// can be solved like this too but the interviewer asked to solve in O(log n ) time complexity
// so we have to use binary search
    bool search(vector<int>& nums, int target) {
       bool isPresent=false;
    int st=0;//initialize st and end
    int end=nums.size()-1;
    while(st<=end){
    int mid=st+(end-st)/2;//find mid
    if(nums[mid]==target){//if mid is target return mid
        isPresent=true;
    }
    //edge case : if all the element are equal,we cannot determine which side is sorted
    if(nums[st]==nums[mid] && nums[mid]==nums[end]){
        st++;
        end--;
        continue; 
      
    }
    if(nums[st]<=nums[mid]){//check if the left is sorted
       if(nums[st]<=target && target<nums[mid]){//check if the target is in between start and mid
        end=mid-1;//if yes, discard right and search only the left part
       }else {
        st=mid+1;//if no,search the right 
       }
    }
    else{//if right is sorted
        if(nums[mid]<target && target<= nums[end]){//check if the target is in between mid and end
            st=mid +1 ;//if yes , discard the left and search in right
        }
    else{
        end=mid-1;//if no , dicard the right and search in left
      }
     }
    }
    return isPresent;
    }
    int main(){
        vector<int> arr={2,5,6,0,0,1,2};
        int tar=0;
        cout<<search(arr,tar);
        return 0;
    }