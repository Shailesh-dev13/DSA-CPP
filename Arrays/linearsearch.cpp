#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int n,int num){
    int i;

    for(i=0;i<n;i++){//loop through arry to find the number
        if(arr[i]==num)//if current element matched the number return its index
        return i;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int num=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    int val=search(arr,n,num);
    cout<<val;
    return 0;

}