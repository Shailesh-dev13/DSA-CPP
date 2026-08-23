#include<bits/stdc++.h>
using namespace std;
int checkSorted(vector <int>& arr){
   int n=arr.size();
     for(int i=1;i<n-1;i++){
        if(arr[i]>=arr[i-1]){
            
        }else{return false;
        }
     }
     return true;

}

int main(){
    vector <int> arr1={2,1,3,5,6,7};
    cout<<checkSorted(arr1);
    return 0;
}