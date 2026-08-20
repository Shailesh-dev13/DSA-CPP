#include<bits/stdc++.h>
using namespace std;
// recursive bubblesort with early exit optimization
void bubbleSort(int arr[],int n){
    //base case:if the size is ! , its already sorted
    if(n==1) return;
     bool didSwap=false;// to check if any swap occured in this pass
     //1st passs to push the largest element to the end
     for(int j=0;j<=n-2;j++){
        if(arr[j]>arr[j+1]){
            //swap arr[j] with arr[j+1]
            swap(arr[j],arr[j+1]);
            didSwap=true;// to mark we did a swap
        }
     }
     //if no swap happed array is already sorted
     if(didSwap==false) return;
     //recursion for the remaining unsorted portion
     bubbleSort(arr,n-1);


}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Call the recursive Bubble Sort function
    bubbleSort(arr, n);

    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}