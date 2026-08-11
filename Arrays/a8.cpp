// vector functions(size)
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> vec{'a','b','c','d','e'};
    cout<<"Size of vector is: "<<vec.size()<<endl;//size of vector is 5
    vec.push_back('f');//adds element at the end of vector i.e. 'f'
    cout<<"new size is:"<<vec.size()<<endl;
    vec.pop_back();//removes last element of vector i.e. 'f'
    for(char val:vec){
        cout<<val<<endl;
    }
    cout<<"first element is:"<<vec.front()<<endl;//first element is 'a'
    cout<<"last element is:"<<vec.back()<<endl;//last element is 'e'
    cout<<"element at index 3 is:"<<vec.at(3)<<endl;//element at index 3 is 'd'

    return 0;
}