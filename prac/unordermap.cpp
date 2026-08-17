#include<bits/stdc++.h>
using namespace std;
/*class FrequencyCounter{
    public:
    void countFreq(int arr[],int n){
        vector<bool> visited(n,false);
    int maxFreq = 0, minFreq=n;
int maxEle=0 ,minEle=0;

for(int i=0;i<n;i++){
    if (visited[i]==true)
    continue;

    //count the frequency of arr[i]
    int count=1;
    for(int j=i+1;j<n;j++){
        if(arr[i]== arr[j]){
            visited[j]= true;
            count++;
        }
    }
    //update max frequency and corresponding elements
    if(count>maxFreq){
        maxEle=arr[i];
        maxFreq=count;
    }
    //update min frequency and corresponding element
    if(count < minFreq){
        minEle=arr[i];
        minFreq=count;
    }
}
//Output the results
cout<< "The highest frequency element is: "<<maxEle<<"\n";
cout<< "The lowest frequency element is: "<<minEle<<"\n";

}
};
int main()
{
    FrequencyCounter fc;
    int arr[]={10,5,15,10,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    fc.countFreq(arr,n);
    return 0;
}*/

// optimal approach

class FrequencyCounter{
    public:
    void Frequency(int arr[], int n)
    {
        unordered_map<int,int> map; // Stores frequency of each element
        //count frequency of all elements
        for(int i=0;i<n;i++)
        map[arr[i]]++;

        int maxFreq=0,minFreq=n;
        int maxEle=0,minEle=0;

        //Traverse the map to find elements with max and min frequencies
        for( auto it: map){
            int element = it.first;
            int count=it.second;

            //update max frequency element 
            if(count > maxFreq){
                maxFreq=count;
                maxEle=element;
            }
            //update min frequency element 
            if(count<minFreq){
                minFreq=count;
                minEle=element;

            }

        }
        cout<<"The highest Frequency element is:"<<maxEle<<"\n";
        cout<<"The lowest Frequency element is:"<<minEle<<"\n";
    }
};

int main()
{
    FrequencyCounter fc;
    int arr[]={10,5,15,10,5,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    fc.Frequency(arr,n);
    return 0;
}










