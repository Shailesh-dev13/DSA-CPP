#include<bits/stdc++.h>
using namespace std;
void changeA(int &b){//pass by reference using alias
    b=20;
}
int main(){
    int a=100;
    changeA(a);
    cout<<"inside main fnx:"<<a<<endl;//20
    return 0;

}