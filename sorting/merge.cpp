#include<bits/stdc++.h>
using namespace std;
//function to merge 2 halves of the array
void merge(vector <int> &arr,int st,int mid,int end){
    //create temp array 
 vector<int> temp;
 int i=st,j=mid+1;
 //merge 2 sorted halves
 while(i<=mid && j<= end){
    if(arr[i]<=arr[j]){// change this for ascending and descending
        temp.push_back(arr[i]);
        i++;
    }else{
        temp.push_back(arr[j]);
        j++;
    }
 }
 //copy remaining elements from left and right half
 while(i<=mid){
    temp.push_back(arr[i]);
    i++;
 }
 while(j<=end){
    temp.push_back(arr[j]);
    j++;
 }
//copy sorted array from temp array to original array
for(int idx=0;idx<temp.size();idx++){
    arr[idx+st]=temp[idx];
}
}
//mergeSOrt function
void mergeSort(vector <int> &arr,int st,int end){
if(st<end){
    //finding the middle index
    int mid=st+(end-st)/2;
    mergeSort(arr,st,mid);//left half sorting
    mergeSort(arr,mid+1,end);//right half sorting
    // merge 2 halves
    merge(arr,st,mid,end);
}
}

int main(){
    vector <int> arr={12,31,35,8,32,17};
    mergeSort(arr,0,arr.size()-1);
for(int val:arr){
    cout<<val<<" ";
}
cout<<endl;
    return 0;

}