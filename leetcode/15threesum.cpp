#include<bits/stdc++.h>
using namespace std;
//brute force approach
/*
vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>> ans;
    set <vector<int>> s;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                if( nums[i]+nums[j]+nums[k]==0){
                    vector<int> trip={nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());

                    if(s.find(trip)==s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }
                }
            }
        }
    }
    return ans;
}*/
//better approach using hashing
/*
vector<vector<int>> threeSum(vector<int>& nums){
 
 set <vector<int>> uniqueTriplets;
 for(int i=0;i<nums.size();i++){
    int tar=-nums[i];
    set<int> s;
  for(int j=i+1;j<nums.size();j++){
    int third = tar- nums[j];
    if(s.find(third)!= s.end()){
        vector<int> trip={nums[i],nums[j],third};
        sort(trip.begin(),trip.end());
        uniqueTriplets.insert(trip);
    }
    s.insert(nums[j]);
  }
 }
 vector<vector<int>> ans(uniqueTriplets.begin(),uniqueTriplets.end());
 return ans;
}*/
//optimal approach using 2 pointers
vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>> ans;//create an array to store the answer
    sort(nums.begin(),nums.end());//sort the array
for (int i =0;i<nums.size();i++){//run a loop for the first number
    if(i>0 && nums[i]==nums[i-1]) continue;//check if the number is already cinsidered to avoid repeated triplets
     int j=i+1,k=nums.size()-1;//initialize pointer j from i+1 index and k from the last
     while(j<k){
        int sum=nums[i]+nums[j]+nums[k];// add all the nums
        if(sum<0){j++;}//if sum is less than 0 increment the j
       else if(sum>0){k--;}//if sum is greater than 0 decrement the k
       else{ans.push_back({nums[i],nums[j],nums[k]});//if sum==0 store the elements
              j++;//increment j 
                k--;//decrement k
     
    while(j < k && nums[j]==nums[j-1]) j++;//check if j is already present then increment j
     }

     }
  }
  return ans;
}

int main() {
    vector<int> arr = {1,2,0,1,0,0,0,0};
   
    
    vector<vector<int>> res = threeSum(arr);

    for (auto &triplet : res) {
        for (auto &num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
}