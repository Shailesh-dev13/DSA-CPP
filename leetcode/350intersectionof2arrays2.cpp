#include<bits/stdc++.h>
using namespace std;
//better approach
/*vector <int> intersection(vector <int>& arr1,vector <int>& arr2,int n,int m){
    sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
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

}*/
//optimal approach using unordered map cause frequency also nedds to be returned
vector <int> intersection(vector <int>& arr1,vector <int>& arr2,int n,int m){
unordered_map<int ,int> freq;
vector <int> ans;
for(int arr:arr1){//count frequency of arr1
    freq[arr]++;
}
for(int arr:arr2){//find intersection
    if(freq[arr]>0){//if freq of any element is greater than 0
        ans.push_back(arr);//add it to the answer arr 
        freq[arr]--;//decrease the frequency
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