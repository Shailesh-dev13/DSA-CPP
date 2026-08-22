#include<bits/stdc++.h>
using namespace std;
//brute force
/*
vector<int> plusOne(vector<int>& digits ){
    long long num=0;
    for(int digit:digits){
        num = num * 10 + digit;
    }
    num++;
    vector <int> ans;
    while(num>0){
        ans.push_back(num%10);
        num/=10; 
    }
    reverse(ans.begin(),ans.end());
    return ans;
}*/
//optimal approach
vector<int>plusOne(vector<int>& digits){
int n=digits.size();
for(int i=n-1;i>=0;i--){//start the loop from the end 
    if(digits[i]<9){//if digit < 9 then increment the digit and return digit
        digits[i]++;
        return digits;//return from here
    }
    digits[i]=0;//if digit = 9 then make it zero
}
digits.insert(digits.begin(),1);//add 1 in the begining in case the digits are 999..
return digits;//return the digits
}
int main(){
    vector<int> arr={1,2,3,4,9,9};
    
    vector <int> nums=plusOne(arr);
    for(int x:nums){
    cout<<x<<" ";
    }
    cout<<endl;
    
    
    return 0;
}