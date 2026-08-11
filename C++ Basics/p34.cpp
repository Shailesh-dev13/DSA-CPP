//Butterfly pattern
#include <iostream>
using namespace std;
int main(){
//top half of the butterfly
int n=10;
for(int i=0;i<n;i++){
    for (int j=0;j<=i;j++){
        cout<<"*";//printing the first set of stars
    }
    if(i!=n-1){
        for(int j=0;j<2*(n-i)-2;j++){
            cout<<" ";//printing spaces
        }
    }
    for(int j=0;j<=i;j++){
        cout<<"*";//printing the second set of stars
    }
    cout<<endl;

}
//bottom half of the butterfly
for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        cout<<"*";//printing the first set of stars
    }
    if(i!=0){
        for(int j=0;j<2*i;j++){
            cout<<" ";//printing spaces
        }
    }
    for(int j=0;j<n-i;j++){
        cout<<"*";//printing the second set of stars
    }
    cout<<endl;
}

    return 0;
} 