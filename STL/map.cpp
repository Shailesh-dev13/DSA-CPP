#include<bits/stdc++.h>
using namespace std;
int main(){
     map<string,int> m;
     m["TV"]=100;
     m["Laptop"]=150;
     m["Phone"]=50;

     m.insert({"camera",25});
     m.emplace("induction",20);
     m.erase("TV");
   for(auto p:m){
    cout<<p.first<<" "<<p.second<<endl;
   }
   cout<<"count :"<<m["Laptop"]<<endl;
   if(m.find("camera")!=m.end()){
    cout<<"found\n";
   }else{
    cout<<"not found\n";
   }

   multimap<string,int>mp;
   mp.emplace("fridge",56);
   mp.emplace("cooler",76);
   mp.emplace("fan",34);
   mp.emplace("fan",34);

   for(auto i:mp){
    cout<<i.first<<" "<< i.second<<endl;
   }

    return 0;
}