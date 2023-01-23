#include <iostream>
#include <vector>
using namespace std;

#include <queue>
int buyTicket(int *arr, int n, int k) {

  queue<int> p; // a queue of indices
  for (int i = 0; i < n; i++)
    p.push(i);

  priority_queue<int> pq;
  // build a heap
  for (int i = 0; i < n; i++) {
    pq.push(arr[i]);
  }

  int time = 0;

  while (p.front() != k ||
         pq.top() != arr[p.front()]) // unless ticket counter meets me and i am
                                     // the priority .
  { // if less priority send at end of queue
    if (pq.top() > arr[p.front()]) {
      int x = p.front();
      p.pop();
      p.push(x);
    }

    else if (pq.top() == arr[p.front()]) {
      pq.pop();
      p.pop();
      time++; // incres time
    }
  }
  return time + 1; // now i will be getting the ticket
}


// #include "solution.h"





int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << buyTicket(arr, n, k);

    delete[] arr;
}