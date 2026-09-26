#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> mp;
    mp.emplace("fridge",56);
   mp.emplace("cooler",76);
   mp.emplace("fan",34);
   mp.emplace("fan",34);

   for(auto i:mp){
    cout<<i.first<<" "<< i.second<<endl;
   }
    return 0;
}