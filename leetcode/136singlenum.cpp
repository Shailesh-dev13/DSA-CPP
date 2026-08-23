#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
       int ans=0;
       for(int val:nums){
        ans=ans^val;//XOR operator: if a^a=0 and a^0=a
       } 
       return ans;
    }
    int main(){
        vector <int> arr={4,1,2,3,1,2,3};
        cout<<singleNumber(arr);
        return 0;
    }