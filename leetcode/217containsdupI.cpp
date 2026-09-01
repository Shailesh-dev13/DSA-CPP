#include<bits/stdc++.h>
using namespace std;
//brute force
/*
bool containsDup(vector<int>& nums){
     bool isDup=false;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                   isDup=true;
                }
            }
        }
        return isDup;
}*/
//optimal approach using hash map
bool containsDup(vector<int>& nums){
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])!=mp.end()){
             return true;
        }
        mp[nums[i]]=i;
    }
    return false;
}
int main(){
    vector <int> arr={1,2,3,4,5};
    cout<<containsDup(arr);
    return 0;
}