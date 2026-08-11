//Inverted Triangle Patterns
#include <iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)//i times for printing space
        cout<<" ";
        for(int j=0;j<n-i;j++){//n-i times for printing number
            cout<<i+1 ;//if we want a inverted pyramid we can add << " " after i+1
        }
        cout<<endl;
    }
    return 0;
}