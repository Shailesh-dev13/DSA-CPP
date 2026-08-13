#include<bits/stdc++.h>
using namespace std;
/* brute force approach
vector<int> revArray(vector<int> &arr){
    int n =arr.size();

    vector<int> ans(n);

    for(int i=0;i<n;i++){
        ans[i]=arr[n-1-i];
    }
    return ans;
}
int main(){
vector<int>arr={1,2,3,4,5};
vector<int>result=revArray(arr);
cout<<"Reversed Array is:";
for(int num:result){
    cout<<num<<" ";
}


    return 0;
}*/

// better approach 2 pointer approach

void revArray(vector<int> &arr){
    int p1=0;
    int p2=arr.size()-1;

    while(p1<p2){
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,5,6,7,8,8};
    revArray(arr);
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}
/* using built in STL function
void revArr(vector<int> &arr){
    reverse(arr.begin(),arr.end());
}
int main(){
    vector<int> arr={1,2,3,4,5};
    revArr(arr);
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}*/