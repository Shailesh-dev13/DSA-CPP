#include<bits/stdc++.h>
using namespace std;
//brute force 
/*bool containsNearbyDUplicate(vector<int>& nums, int k){
 bool isDup=false;
 for(int i=0;i<nums.size();i++){
    for(int j=i+1;j<nums.size();j++){
        if(nums[i]==nums[j]&& abs(i-j)<=k){
            isDup=true;
        }
    }
 }
 return isDup;
}*/
bool containsNearbyDUplicate(vector<int>& nums, int k){
    unordered_map<int,int> mp;//create an empty hash map to store the key and values
    for(int i=0;i <nums.size();i++){//iterate the array
        if(mp.find(nums[i])!=mp.end()){//check if the element is already present
        if(i-mp[nums[i]]<=k){//if present check if its difference is less than k
            return true;
        }
    }
    mp[nums[i]]=i;//update the stored index to current index
}
return false;
}
int main(){
    vector<int> arr={1,2,3,1,2,3};
    int k= 2;
    cout<<containsNearbyDUplicate(arr,k);
    return 0;
}