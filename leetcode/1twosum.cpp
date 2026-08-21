#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;//hashmap to store {numbers,index}

    for(int i = 0; i < nums.size(); i++) {
        int pairSum = target - nums[i];// to find the complement of the number to make required target

        if(mp.find(pairSum) != mp.end()) {//check  for the existence of  complementary elements
            return {mp[pairSum], i};//if found returns the [index of compementary elements,index of the current element i]
        }

        mp[nums[i]] = i;//stores the current number and the index in hashmap
    }

    return {};
}
int main(){
    vector<int> arr ={2,4,6,14};
    int target=18;
   vector<int> ans= twoSum(arr,target);
   for(int x:ans){
    cout<<x<<" ";
   }
   return 0;
}