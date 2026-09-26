#include<bits/stdc++.h>
using namespace std;
//custom comparator
bool comparator(pair<int,int> p1,pair<int,int> p2){
if(p1.second<p2.second) return true;
if(p1.second>p2.second) return false;
if(p1.first<p2.first) return true;
else return false;
}
int main(){
    
    int arr[5]={3,4,62,8,2};
    sort(arr,arr+5);
    for(int val:arr){
        cout<<val<<" ";

    }
    cout<<endl;
    sort(arr,arr+5,greater<int>());
    for(int val:arr){
        cout<<val<<" ";

    }
    cout<<endl;
    vector<pair<int,int>> vec={{3,4},{6,5},{3,7},{4,8}};
    sort(vec.begin(),vec.end());
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    vector<pair<int,int>> vec1={{3,4},{6,5},{3,7},{4,8}};
    sort(vec1.begin(),vec1.end(),comparator);
    for(auto p:vec1){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

    // reverse
    vector<int> vec2={1,5,7,3,8};
    reverse(vec2.begin(),vec2.end());
    for(auto p:vec2){
        cout<<p<<endl;
    }
    cout<<endl;
    //next permutaion 
    string s="abc";
    string s1="bca";
    next_permutation(s.begin(),s.end());
    cout<< s<<endl;
    prev_permutation(s1.begin(),s1.end());
    cout<< s1<<endl;

    // max & min element in a array
    cout<<*max_element(vec2.begin(),vec2.end());
    cout<<*min_element(vec2.begin(),vec2.end());
    cout<<binary_search(vec2.begin(),vec2.end(),7);//binary search in array
    //count set bits
    int n=15;
    long int n1=15;
    long long int n2=15;
    cout<<__builtin_popcount(n);
    cout<<__builtin_popcountl(n1);
    cout<<__builtin_popcountll(n2);
    return 0;
}