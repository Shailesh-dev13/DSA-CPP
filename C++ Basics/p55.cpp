#include <iostream>
using namespace std;
int x=10;//global scope
int main(){

    if (3>1){
        int x=30;//local scope
    }
    int x=20;//global scope
    cout<<x<<endl;// only global x is accessible here
    return 0;
}