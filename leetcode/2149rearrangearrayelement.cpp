 #include<bits/stdc++.h>
 using namespace std;

 /*vector<int> rearrangeArray(vector<int>& nums){
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            pos.push_back(nums[i]);
        }else{
            neg.push_back(nums[i]);
        }

    }
    for(int i=0;i<nums.size()/2;i++){
        nums[2*i]=pos[i];
        nums[2*i+1]=neg[i];
    }
    return nums;
 }*/
vector<int> rearrangeArray(vector<int>& nums){
    vector<int> ans(nums.size(),0);//create array of size n and initialize it with zero
    int posIndex=0,negIndex=1;//initialize positive index from 0, and negative index from 1

    for(int i=0; i<nums.size();i++){
        if(nums[i]<0){//if number is negative 
            ans[negIndex]=nums[i];//store the answer in the first odd index
            negIndex+=2;//increment the index +2 for next odd index
        }else{
            ans[posIndex]=nums[i];//if positive store answer in 1st even index
            posIndex+=2;//increment the index +2 for next even index
        }
    }
    return ans;
    
}
 int main(){
    int n=4;
    vector<int> arr={1,2,-4,-6};
    vector<int> ans= rearrangeArray(arr);
    for(int x: ans){
        cout<< x<<" ";
    }
 }