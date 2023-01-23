#include <iostream>
#include <bits/stdc++.h>

// #include "solution.h"

void heapSort(int input[], int size){
    
    // to build the heap::::::::
    int childindex;
    for(int i = 1 ; i < size ; i++){
        childindex = i;
        while(childindex>0){
            int parentIndex = (childindex-1)/2;
            if(input[childindex]<input[parentIndex]){
                int temp = input[childindex];
                input[childindex] = input[parentIndex];
                input[parentIndex] = temp;
            }
            else break;
            childindex = parentIndex;
        }
    }
    int n = size;

    while(n>1){    // to call removeMin , size-1 times::::::::::::
        int temp = input[0];
        input[0] = input[n-1];
        input[n-1] = temp;

        n--;
    // downheapify

        int parentIndex = 0;
        int leftchildIndex = (2*parentIndex)+1;
        int rightchildIndex = (2*parentIndex)+2;
    
        while(leftchildIndex < n){
            int minIndex = parentIndex;
            if(input[leftchildIndex] <input[minIndex]){
                minIndex = leftchildIndex;
            }
            if(rightchildIndex < n && input[rightchildIndex] < input[minIndex]){
                minIndex = rightchildIndex;
            }
            if(minIndex == parentIndex) break;

            int temp = input[minIndex];
            input[minIndex] = input[parentIndex];
            input[parentIndex] = temp;

            parentIndex = minIndex;
            leftchildIndex = 2*parentIndex+1;
            rightchildIndex = 2*parentIndex+2;
        }
    }



}

using namespace std;

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}