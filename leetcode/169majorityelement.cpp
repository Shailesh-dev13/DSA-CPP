#include<bits/stdc++.h>
using namespace std;
//better appraoch
/*int majorityElement(vector<int>& nums){
int n=nums.size();
sort(nums.begin(),nums.end());
int freq=1, ans=nums[0];
for(int i=1;i<n ;i++){
    if(nums[i]==nums[i-1]){freq++;}
    else{freq=1;
    ans=nums[i];}
    if(freq>n/2){
        return ans;
    }
}
return ans;

}*/
// optimal approach- Moore's voting algorithm
int majorityElement(vector<int>& nums){
 int freq=0,ans=0;
 for(int i=0;i<nums.size();i++){
    if(freq==0){//check if freq 0 then store the element as answer
        ans=nums[i];
    }if(ans==nums[i]){//check if ans is equal to nums then increase freq counter 
        freq++;
    }else{//else decrease
        freq--;
    }
 }
 return ans;
}
int main(){
    vector<int> arr={2,2,1,1,1,2,2};
     int ans=majorityElement(arr);
     cout<<"the majority element is:"<< ans << endl;
     return 0;

}