#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

cout<<endl;//1,2,3

deque<int> dq;
dq.push_back(1);
dq.push_back(2);
dq.push_back(3);//1,2,3

dq.push_front(4);//4,1,2,3
cout<<dq.front()<<" "<<dq.back()<<endl;//4 3
dq.pop_back();//4,1,2
dq.pop_front();//1,2
cout<<dq.front()<<" "<<dq.back()<<endl;//1,2


    return 0;
}