#include<bits/stdc++.h>
using namespace std;       
//brute force approach 
/*vector<int> findUnion(int arr1[],int arr2[],int n,int m){
    set<int>st;//create a set to store unique element
    for(int i=0;i<n;i++){//insert element from first array
        st.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){//insert element from second array
        st.insert(arr2[i]);
    }
    //convert set to vector
    vector<int> unionArr(st.begin(),st.end());
    return unionArr;
}*/
//optimal approach
vector<int> findUnion(vector <int>& arr1,vector <int>& arr2,int n,int m){
    int i=0;//intitialize 2 pointers for both arrays
    int j=0;
    vector<int> unionArr;//vector to store union element
    while(i<n && j<m){//loop until either pointer reaches the end
        if(arr1[i]<arr2[j]){//if current element in arr 1 is smaller 
          if(unionArr.size()==0 || unionArr.back()!=arr1[i]){//add element if union empty or different from last added
             unionArr.push_back(arr1[i]);
          }
          i++;//move pointer in arr1
        }else{if(unionArr.size()==0 || unionArr.back()!=arr2[i]){
             unionArr.push_back(arr2[j]);
          }
          j++;}
    }
    while(j<m){//add remaining elements from array2
        if(unionArr.size()==0 || unionArr.back()!=arr2[j]){
             unionArr.push_back(arr2[j]);
          }
          j++;
    }
    while(i<n){//add reamining element from arr1
        if(unionArr.size()==0 || unionArr.back()!=arr1[i]){
             unionArr.push_back(arr1[i]);
          }
          i++;
    }
    return unionArr;//return union
}

int main(){
   vector <int> arr1={1,3,4,4,5,6};
   vector <int> arr2={2,3,4,4,7,8,9};
    int n=6,m=7;

    vector<int> uni=findUnion(arr1,arr2,n,m);
    cout<<"Union of array 1 and 2 is:";
    for(int val:uni){
        cout<<val<<" ";
    }return 0;
}