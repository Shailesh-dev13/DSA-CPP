#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1,int m, vector<int>& nums2, int n){
int idx=m+n-1,i=m-1,j=n-1;//initialize 3 pointers
while(i>=0 && j>=0){//run pointer till the end of loops
    if(nums1[i]>= nums2[j]){// compare element in both array
        nums1[idx]=nums1[i];//if found  store it in array
        i--;//decrement i
        idx--;//decrement index
    }else{
        nums1[idx]=nums2[j];//store the elements of 2nd array
        j--;//decrement idx and j
        idx--;

    }}
    while(j>=0){//to push the remaining j into the array
        nums1[idx]=nums2[j];
        idx--;
        j--;
    }

}
int main(){
    vector<int> arr1={1,2,3,0,0,0};
    int m=3;
    vector<int> arr2={3,4,5};
    int n=3;
    merge(arr1,m,arr2,n);
    for(int x:arr1){
        cout<<x<<" ";
    }
    return 0;
}   