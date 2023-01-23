#include <iostream>
using namespace std;

#include <queue>
#include <vector>

using namespace std;
void findMedian(int arr[], int n) {

  priority_queue<int> max;
  priority_queue<int, vector<int>, greater<int>> min;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      max.push(arr[i]);
    } // push is any of the heap  //max or min

    else {
      if (arr[i] < max.top())
        max.push(arr[i]);
      else
        min.push(arr[i]);
    }
    // keeping in check that both heap are almost of same size
    if (int(max.size() - min.size()) > 1) {
      int x = max.top();
      max.pop();
      min.push(x);
    } else if (int(min.size() - max.size()) > 1) {
      int x = min.top();
      min.pop();
      max.push(x);
    }

    int c = max.size() + min.size(); // count

    // checking size of list to find median
    if (c % 2 == 0){
      int a = (max.top() + min.top()) / 2;
      v.push_back(a);
    }
      // cout << (max.top() + min.top()) / 2 << endl;
    else {
      if (max.size() > min.size()) v.push_back(max.top());
        // cout << max.top() << endl;
      else v.push_back(min.top());
        // cout << min.top() << endl;
    }
  }
  for(int i = 0 ; i< v.size() ; i++){
    cout<<v.at(i)<<" ";
  }
}



// #include "solution.h"






int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    findMedian(arr,n);

    delete[] arr;
}
