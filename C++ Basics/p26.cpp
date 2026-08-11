//square pattern diffent types
#include <iostream>
using namespace std;
int main(){
     int n=4;
     int num=1;
   for(int i=0;i<n;i++){//outer loop
    for (int j=0;j<n;j++){//inner loop
        cout<<num<<" ";
        num++;
        }
        cout<<endl;
   }
   cout<< "after number pattern :"<< num <<endl;

    return 0;   
}