//grade checking system
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter your Marks:";
    cin>>marks;
    if(marks>=90){
        cout<<"your grade is A\n";
    }else if(marks>=80&&marks<90){
        cout<<"your grade is B\n";
    }else if(marks>=70&&marks<80){
        cout<<"your grade is C\n";
    }else{
        cout<<"your grade is D\n";}
return 0;
    }
    
    
