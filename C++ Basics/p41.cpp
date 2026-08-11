//Functions
#include <iostream>
using namespace std;
int printHello(){
    cout<<"hello\n";
    return 3;
}
int main(){
   
    printHello();//function call or invoke
    int val=printHello();//function call or invoke
    cout<<"val is:"<<val<<endl;
    cout<<printHello();


    return 0;
}