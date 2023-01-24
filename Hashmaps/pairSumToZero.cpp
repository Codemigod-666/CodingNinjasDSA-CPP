#include <iostream>
using namespace std;

#include <unordered_map>

int pairSum(int arr[], int n){
    unordered_map<int, int> m;

    for(int i =0  ; i< n ; i++){
        m[arr[i]]++;
    }

    int count = 0;

    for(int i = 0 ; i< n ; i++){
        int need = -arr[i];
        if(m.count(need) >0 && need != 0) count+= m[arr[i]];
        else if(need == 0 and m[need] >0 ) count += (m[need]-1);

    }
    return count/2;
}
// #include "solution.h"

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}