// sum of all even numbers from 1 to n using for loop
    #include<iostream>
    using namespace std;
int main(){
    int n=10;
    int evenSum=0;
    for(int i =1;i< n;i++){
        if(n%2==0){
            evenSum+=i;
        }  
    }
    cout<<"Even sum is:"<<evenSum<<endl;
    return 0;
}

