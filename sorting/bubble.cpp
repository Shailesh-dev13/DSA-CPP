#include<bits/stdc++.h>
using namespace std;
/*void bubbleSort(vector<int>& arr){//O(n^2)
    int n=arr.size();
    for(int i=0;i<n-1;i++){//1*n
        for(int j=0;j<n-i-1;j++){//n*n
            if(arr[j] > arr [j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
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
    bubbleSort(arr);
   
    return 0;
}*/

//optimal approach
void bubbleSort(vector<int>& arr){//O(n^2)
    int n=arr.size();
    for(int i=0;i<n-1;i++){//1*n
        bool isSwap=false;
        for(int j=0;j<n-i-1;j++){//n*n
            if(arr[j] < arr [j+1]){//for ascending descending change the < > operators
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
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
    bubbleSort(arr);
   
    return 0;
}