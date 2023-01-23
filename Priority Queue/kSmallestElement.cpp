#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// #include "solution.h"

#include <queue>

// THIS IS THE SOLUTOIN FUNCTIOIN THAT RETURNS THE VECTOR OF SMALLEST K INTERGERS
vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    priority_queue<int> pq;
    for(int i = 0 ; i< k ; i++){
        pq.push(arr[i]);
    }

    for(int i = k ; i <n ; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    vector<int> v;
    while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
    }
    return v;
}

// THIS IS THE ALREADY PROVIDED CODE 

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    vector<int> output = kSmallest(input, size, k);
    sort(output.begin(), output.end());

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    delete[] input;
}