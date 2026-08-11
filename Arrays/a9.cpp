//how the allocation spaces works in vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    
    cout<<vec.size()<<endl;//size of vector is 6
    cout<<vec.capacity()<<endl;//capacity of vector is 8
    return 0;
}