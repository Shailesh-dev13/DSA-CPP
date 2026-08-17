#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    //pre compute
    map <int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    //iterate over the map:
    /* for (auto it:mp){
    cout<<it.first<<"->"<<it.second<<endl;
    }*/
  /* int q;
   cin >> q;
   while(q--){
    int number;
    cin>> number;
    //fetch
    cout<<mp[number]<<endl;
   }
   return 0;
}*/

//function to count frequency of each element in the array
/*void countFreq(int arr[], int n){
    // create a visited array to mark elements that are already processed
    vector<bool> visited(n,false);
    //traverse through all elements of the array
    for(int i=0;i<n;i++){
        // skip elemnt if already processed
        if(visited[i] == true)
        continue;

        //count the frequency of arr[i]
        int count = 1;
        for(int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                visited[j]=true;//mark arr[j] as processed
                count ++;
            }
            }
            cout<<arr[i]<<" "<<count<<endl;
        }
    }
    int main(){
        int arr[]={10,5,10,15,10,5};
        int n=sizeof(arr) / sizeof(arr[0]);
        countFreq(arr,n);
        return 0;
    }*/

    // optimal approach
    // function to count freequency of each element in the array using unordered_map
    void Frequency(int arr[], int n){
        unordered_map<int,int>map;
        //traverse the array and count frequency
        for(int i=0;i<n;i++){
            map[arr[i]]++;
        }
        //traverse through the unordered_map and print frequency
        for(auto x: map){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
    int main(){
        int arr[]={10,5,10,15,10,5};
        int n=sizeof(arr) / sizeof(arr[0]);
        Frequency(arr,n);
        return 0;
    }

