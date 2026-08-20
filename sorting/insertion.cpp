#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr ){//for ascending descending change the < > operators
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;//placing the current in its correct position
        
    }
cout<<"Sorted array: \n";
for(int num:arr){
    cout<<num<<" ";
}
}


int main(){
    int n=5;
    vector<int> arr={4,1,5,2,3};
    cout<<"Given array"<<endl;
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
    insertionSort(arr);
   
    return 0;
}