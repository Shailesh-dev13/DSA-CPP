#include<bits/stdc++.h>
using namespace std;
int main(){
deque<int> d={1,2,3,4,5,6};
pair<int,char> p={1,'r'};//pair
pair<string,pair<int,string>> par={"shailesh",{14,"priyam"}};
vector<pair<int,int>> vec={{1,2},{3,4},{5,6}};
vec.push_back({7,8});//insert
vec.emplace_back(9,10);//in_place objects created

for(auto val:vec){
    cout<<val.first<<" "<<val.second<<endl;
}
cout<<endl;
cout<<d[2]<<endl;
cout<<p.first<<endl;
cout<<p.second<<endl;
cout<<par.first<<endl;
cout<<par.second.second<<endl;

    return 0;
}