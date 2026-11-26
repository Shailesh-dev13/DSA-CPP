#include<bits/stdc++.h>
using namespace std;
int main(){
          int arr[]={1,2,3,4,5,6};
          int a=10;

          int* ptr=&a;

          cout<<ptr<<endl;
          ptr++;
          cout<<ptr<<endl;//+4 bytes hexadecimal
          ptr+=2;//2int(8byte)
          cout<<ptr<<endl;
          cout<<*(arr+1)<<endl;
          cout<<*(arr+2)<<endl;
          int* ptr2;//100
          int* ptr3=ptr2+2;//108
          cout<<ptr2<<endl;
          cout<<ptr3<<endl;
          cout<<ptr3-ptr2<<endl;
          cout<<(ptr3>ptr2)<<endl;
          cout<<(ptr3==ptr2)<<endl;

          return 0;
}