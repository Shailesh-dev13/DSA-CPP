#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(1);
    s.insert(10);
    s.insert(100);
    s.insert(1000);
    s.insert(10000);
    for(auto i:s){
    cout<<i<<" ";
   }
   cout<<endl;
   cout<<*s.lower_bound(8)<<" ";
   cout<<*s.lower_bound(10)<<" ";//should not be greater than key
   cout<<*s.upper_bound(999)<<" ";
   cout<<*s.upper_bound(1000)<<" ";//greater than key
    return 0;
}