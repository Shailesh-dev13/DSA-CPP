#include<iostream>
using namespace std;
int main(){
    cout<<!(3<1)<<endl;//it should be 0 but due to not operator it is showing 1
    cout<<((4>2)||(5>3))<<endl;//or operator is used with multiple statement when either is true final answer is true
    cout<<((5<1)&&(7>2))<<endl;//and operator is used if both the statement are true then the output will be true
    return 0;
}