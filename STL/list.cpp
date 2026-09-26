#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l={1,2,3,4};
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(5);

    l.pop_back();
    l.pop_front();
    //size,erase,clear,begin,end,rbegin,rend,insert,fornt,back
    for(int val : l){
        cout<< val<<endl;
    }
    cout<< endl;
    return 0;
}