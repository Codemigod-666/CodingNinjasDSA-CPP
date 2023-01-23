#include <iostream>
using namespace std;
#include <unordered_map>

int highestFrequency(int arr[], int n) {
    unordered_map<int, int> m;

    for(int i = 0; i< n ; i++){
        m[arr[i]]++;
    }

    int maxcount = 0, res = -1;
    for(int i = 0 ; i< m.size() ; i++){
        if(m[arr[i]]> maxcount){
            res = arr[i];
            maxcount = m[arr[i]];
        }
    }
    return res;
}
// #include "solution.h"




int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}