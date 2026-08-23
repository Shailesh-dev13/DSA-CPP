#include<bits/stdc++.h>
using namespace std;
//brute force
/*int sortArr(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}*/

// optimal solution
int sortArr(vector <int>& arr){
    int max=arr[0];//initialize a max variable that store 0th element at start
    int n=arr.size();
    for(int i=0;i<n;i++){//iterate through the array
        if(max<arr[i]){//if the element of the index is greater than max then 
            max=arr[i];//update max
        }
    }
    return max;//return max
}

int main(){
    vector <int> arr1={2,3,5,6,7};
    vector <int> arr2={6,48,2,6,5,7};

    cout<<"The largest element in the array is:"<<sortArr(arr1)<<endl;
    cout<<"The largest element in the array is:"<<sortArr(arr2)<<endl;
    return 0;
}
