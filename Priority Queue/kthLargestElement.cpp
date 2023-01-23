#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// #include "solution.h

#include <queue>
#include <vector>

int kthLargest(int *arr, int n, int k) {
  priority_queue<int, vector<int> , greater<int> > pq;
  
  for(int i = 0 ; i< k ; i++){
    pq.push(arr[i]);
  }
  
 

  for(int i = k ; i< n ; i++){
    if( pq.top() < arr[i]){
      pq.pop();
      pq.push(arr[i]);
    }
  }
  return pq.top();
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << kthLargest(arr, n, k);

    delete[] arr;
}