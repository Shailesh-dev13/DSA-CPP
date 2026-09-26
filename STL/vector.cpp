#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,6,7};
   // vec.erase(vec.begin()+1,vec.begin()+3);
   // vec.insert(vec.begin()+2,100);
   //vec.clear();
   vector<int>:: iterator it;
   for(it = vec.begin();it != vec.end();it++){
    cout<<*(it)<<endl;
   }
   for(auto it = vec.rbegin();it != vec.rend();it++){// auto keyword :    vector<int>:: iterator it;
    cout<<*(it)<<endl;
   }
    return 0;
}