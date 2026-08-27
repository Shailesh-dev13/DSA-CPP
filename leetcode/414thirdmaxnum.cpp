#include<bits/stdc++.h>
using namespace std;
//brute force approach
/*int thirdMax(vector<int>& nums){
   sort(nums.begin(),nums.end());
   int distinctCount=1;
   for(int i=nums.size()-2;i>=0;i--){
    if (nums[i]!=nums[i+1]){distinctCount++;
        if(distinctCount==3){
            return nums[i];
        }
   }
}
return nums.back();//return the last element 
}*/
//better approach
/*
int thirdMax( vector<int>& nums){
    set<int> s;
    for (int num:nums){
        s.insert(num);
    }
    if(s.size()<3){
        return*s.rbegin();
    }
    auto it=s.rbegin();//s.rbegin() point the largest elemnt
    it++;
    it++;
    return *it;
}*/
//optimal approach
int thirdMax(vector<int>& nums){
    long long first=LLONG_MIN;// initiate 3 minimum values variable 
    long long second=LLONG_MIN;
    long long third=LLONG_MIN;
    for(int num:nums){//check duplicate if found skip
        if(num==first||num==second||num==third)
        {
             continue;
           }    
//new maximum 
if(num>first){//if number is greater than first
    third=second;//second goes to third
    second=first;//first goes to second
    first=num;//num stored in first
}else if(num>second){//new second max
    third=second;
    second=num;
}else if(num>third){
    third=num;//new third max
}
    }
    if(third==LLONG_MIN){//if third max doesnt exist 
        return(int)first;
    }
    return(int)third;
}


int main(){
    vector<int> arr={1,4,6,2,3};
   cout<< thirdMax(arr);
    return 0;
}