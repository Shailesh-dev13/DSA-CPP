#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int i,int n){
    //base case if index reaches thesize return
    if(i==n) return;
    int j=i;
    // if the element is smaller than its predecessor shift it to left
    while(j>0 && arr[j-1]>arr[j]){
        //swap arr[j] with arr[j-1]
        swap(arr[j],arr[j-1]);
        j--;
    }

//recursive call for next index
insertionSort(arr,i+1,n);

}
int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call recursive insertion sort
    insertionSort(arr, 0, n);

    cout << "After Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}