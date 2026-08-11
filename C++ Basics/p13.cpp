//find character uppercase or lowercase
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"the character is lowercase\n";
    }else{
        cout<<"the character is uppercase\n";
    }
    return 0;
}
//we can also use ascii value to check the character is uppercase or lowercase
//if(ch>=97 && ch<=122){
//    cout<<"the character is lowercase\n";