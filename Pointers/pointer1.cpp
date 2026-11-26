#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=20;
    int*ptr=&x;//pointer
    float price=100.25f;
    float* pntr=&price;
    int ** ptr2=&ptr;//pointer to pointer
    cout<<ptr<<endl;
    cout<<&x<<endl;
    cout<<&ptr<<endl;
    cout<<pntr<<endl;
    cout<<ptr2<<endl;
    cout<<*(ptr)<<endl;//dereference operator
    cout<<*(&x)<<endl;
    cout<<*(ptr2)<<endl;//it would return the memory address of ptr
    cout<<**(ptr2)<<endl;//dereference again , we get the value stored in the ptr
    return 0;

}