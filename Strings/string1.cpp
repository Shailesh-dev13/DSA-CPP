#include<bits/stdc++.h>
using namespace std;
//character arrays
int main(){
char arr[13];//string literals
//cout<<arr[5]<<endl;//constant pointer
cout<<"enter  char array: ";
cin.getline(arr,13);
for(char ch: arr){
    cout<< ch<< " ";
}
cout<<endl;
    return 0;

}