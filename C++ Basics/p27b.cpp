//Triangular patterns with characters
#include <iostream>
using namespace std;
int main(){
    int n=6;
    char ch ='A';
    for(int i=0;i<n;i++){
        
        for(int j=0;j<i+1;j++){
            cout<<ch<<" "; 
            
        }
        cout<<endl;
         ch=ch+1;//yahan ch updation outer loop mai hoo rha hai kyun ki inner loop mai ch reset hojata to A 
    }



    return 0;
}