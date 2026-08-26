#include<bits/stdc++.h>
using namespace std;
/*vector <int> intersection(vector <int>& arr1,vector <int>& arr2,int n,int m){
    vector<int>ans;
    int vis[m]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]&&vis[j]==0){
                ans.push_back(arr1[i]);
                vis[j]=1;
                break;
            }
            if(arr2[j]>arr1[i]) break;
        }
    }
    return ans;
}*/
//optimal solution 
vector <int> intersection(vector <int>& arr1,vector <int>& arr2,int n,int m){
    int i=0;//initialize 2 pointers
    int j=0;
    vector<int> ans;//take an array answer
    while(i<n && j<m){//iterate both pointers to the end of the respective arrays
        if(arr1[i]<arr2[j]){//check if elemnt in index of arr1 is less than elemnt in index of arr2
            i++;//if yes incretement 1
        }
        else if(arr2[j]<arr1[i]){//check vice versa and 
          j++;//increment j
        }else{
            ans.push_back(arr1[i]);//if both are equal push it into arr ans
            i++;
            j++;//increment both
        }
    }
    return ans;

}




int main(){
   vector <int> arr1={1,3,4,4,5,6};
   vector <int> arr2={2,3,4,4,7,8,9};
    int n=6,m=7;

    vector<int> inter=intersection(arr1,arr2,n,m);
    cout<<"intersection of array 1 and 2 is:";
    for(int val:inter){
        cout<<val<<" ";
    }return 0;
}