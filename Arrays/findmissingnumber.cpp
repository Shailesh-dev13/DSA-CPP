#include<bits/stdc++.h>
using namespace std;
//brute force - using linear search
/*
int missingNum(vector<int>& arr){
    int n=arr.size()+1;
    //iterate from 1 to n and check if the current number present
    for(int i=1;i<=n;i++){
        bool found = false;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                found = true ;
                break;
            }
        }
        //if the current number is not present
        if(!found)
        return i;
    }
    return -1;
}*/
//better approach using hashing
/*
int missingNum(vector<int>& arr){
    int n=arr.size()+1;
    //create hash array of size n+1
    vector<int> hash(n+1,0);
    //store frequencies of elements
    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;
    }
    //find the missing number
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}*/
//optimal solution using sum of num formula
/*int missingNum(vector<int> &arr){
    int n=arr.size()+1;
    //calculate the sum of arry elemnet
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    //calculate the expected sum
    long long expSum=(n*1LL*(n+1))/2;
    return expSum-sum;
}*/
//using XOR
int missingNum(vector<int> & arr){
    int n=arr.size()+1;
    int xor1=0,xor2=0;
    //XOR all array elements
    for(int i=0;i<n-1;i++){
        xor2^=arr[i];
    }
    //xor all number from 1 to n
    for(int i=1;i<=n;i++){
        xor1^=i;
    }
    return xor1^xor2;//missing number is xor of xor1 and xor2
}
int main(){
    vector<int>arr={8,2,4,5,3,7,1};
    cout<<missingNum(arr)<<endl;
    return 0;
}