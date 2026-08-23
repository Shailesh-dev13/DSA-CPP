#include<bits/stdc++.h>
using namespace std;
//brute force
/*
int getElement(int arr[],int n){
    if(n==0 || n==1)
    cout<<-1<<" "<<-1<<endl;
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout<<"The second largest element in the array is:"<<large<<endl;
    cout<<"The second smallest element in the array is:"<<small<<endl;
    return 0;
}*/
//better approach
int getElement(int arr[],int n){
    if(n==0 || n==1)//base case if the array has 0 or 1 element
    cout<<-1<<" "<<-1<<endl;//return -1
    int small=INT_MAX,second_small=INT_MAX;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for(i=0;i<n;i++){
        small=min(small,arr[i]);//small is minimun of both
        large=max(large,arr[i]);//large is maximum of both
    }
    for(i=0;i<n;i++){
        if(arr[i]<second_small && arr[i]!= small)//if the number if not equal to the smallest
        second_small=arr[i];
        if(arr[i]>second_large && arr[i]!=large)//if the number id not equal to the largest
        second_large=arr[i];
    }
    




    cout<<"The second largest element in the array is:"<<second_large<<endl;
    cout<<"The second smallest element in the array is:"<<second_small<<endl;
    return 0;
}


int main(){
    
   int arr[]={6,48,2,6,5,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    getElement(arr,n);

    
    return 0;
}