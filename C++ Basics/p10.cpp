//check if the person is able to vote or not
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter your age:";
    cin>>age;
    if(age>=18){
        cout<<"yes you can vote";
    }else{
        cout<<"sorry you cannot vote";
   }
}