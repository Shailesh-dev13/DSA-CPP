#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;//straight
    priority_queue<int,vector<int>,greater<int>> rq;// reverse order priority queue

    pq.push(5);
    pq.push(10);
    pq.push(3);
    pq.push(4);
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<< "reverse Priority Queue"<<endl;
    rq.push(5);
    rq.push(10);
    rq.push(3);
    rq.push(4);
    while(!rq.empty()){
        cout<<rq.top()<<" ";
        rq.pop();
    }
    return 0;
}