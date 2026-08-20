#include<bits/stdc++.h>
using namespace std;
//partitioning function
int partition(vector <int>& arr,int st,int end ){
    int idx=st-1,pivot=arr[end];//choosing last element as pivot


    for(int j=st;j<end;j++){
        if(arr[j]>=pivot){// modify for ascending and descending
            idx++;// if element is smaller or equals to pivot than increment i and swap with j
            swap(arr[j],arr[idx]);

        }
    }
    idx++;
    swap(arr[end],arr[idx]);//place the pivot in correct position
    return idx;
}

void quickSort(vector <int>& arr,int st,int end ){
    if(st<end){//base case if st is less than end
       int pivIdx= partition(arr,st,end);//find pivot idx after partitioning
        quickSort(arr,st,pivIdx-1);//left half
        quickSort(arr,pivIdx+1,end);//right half
    }

     
}
int main(){
    vector <int> arr={12,31,35,8,32,17};
    quickSort(arr,0,arr.size()-1);
for(int val:arr){
    cout<<val<<" ";
}
cout<<endl;
    return 0;

}