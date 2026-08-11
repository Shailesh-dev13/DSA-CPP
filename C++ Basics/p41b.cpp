#include<iostream>
using namespace std;
//sum of two d numbers using function
double sum(double a,double b){
    double s=a+b;
    return s;
}
//min of 2 nummbers using function
int min(int a,int b){//parameters
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int main(){
   cout<< "sum of the two numbers are:" << sum(3.5,4.5) << endl;//arguments
    
    cout<< "minimum of the two numbers are:" << min(5,9) << endl;//arguments
return 0;
}