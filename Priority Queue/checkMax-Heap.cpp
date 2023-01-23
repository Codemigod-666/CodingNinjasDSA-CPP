#include <iostream>
using namespace std;
// ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

bool isMaxHeap(int arr[], int n) {
    // Write your code here
    bool isHeap = true;
    int childIndex = n-1;

    while(childIndex>0){
        int parentIndex = (childIndex-1)/2;

        if(arr[parentIndex] < arr[childIndex]) return false;
        
        childIndex = parentIndex;
        parentIndex = (childIndex-1)/2;
    }
    return isHeap;
}




// :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::


int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}