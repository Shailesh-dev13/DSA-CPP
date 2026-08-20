#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;// unsorted part starting
        for(int j=i+1;j<n;j++){
            if(arr[j] > arr [smallestIdx]){//for ascending descending change the < > operators
                smallestIdx=j;//update smallest index if smaller element is found
            }
        }
        // swap the found minimum element with the first element of unsorted part
        swap(arr[i],arr[smallestIdx]);
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
    selectionSort(arr);
   
    return 0;
}