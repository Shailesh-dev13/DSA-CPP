//linear search in vector
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    int target=5;
    for(int val:vec){
        for(int i=0;i<vec.size();i++){
            if (vec[i]==target){
                cout<<"found at index:"<<i;
                
            }
            
        }
        
       break; 
    }
    cout<<endl;
    return 0;

}