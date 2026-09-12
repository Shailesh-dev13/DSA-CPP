#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums , int target){
    vector<vector<int>> ans;//to store answer
    sort(nums.begin(),nums.end());//sort the array
    for(int i=0;i<nums.size();i++){//1st loop for the first number
        if(i>0 && nums[i]==nums[i-1]) continue;//skip duplicates
        for(int j=i+1;j<nums.size();j++){//2nd loop for the second number
          if(j>i+1 && nums[j]==nums[j-1]) continue;//skip duplicates
          int k=j+1,l=nums.size()-1;// initialize 2 pointers one after the second element and another at the end of the array
          while(k<l){
            long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
            if(sum<target){k++;}//if sum is less than target increment k
            else if(sum>target){l--;}//if sum is more than target decrement l
            else{// if sum == target then store it in the ans array
                ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                k++;l--;//increment k and decrement l

                while(k<l && nums[k]==nums[k-1]){k++;}// skip duplicates 
            }
          }
        }
    }
    return ans;
}int main() {
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> ans = fourSum(arr, target);

    for (auto quad : ans) {
        for (int num : quad) cout << num << " ";
        cout << endl;
    }
    return 0;
}