#include <iostream>
using namespace std;



#include <map>

int highestFrequency(int arr[], int n) {
    // Write your code here
    map<int, int> max;
//  this for loop will keep the count of each key in the value
    for(int i = 0 ; i< n;  i++){
        //  here the value of the respected key is incremented if it's repeated
        //  as the default value is zero for each key
        
        max[arr[i]]++;
    }

// 
    int key = 0;
    int value = 0;
    for(int i = 0;  i<n ; i++){

        // if we fount some value that is greater than the previous
        //  we simply update the value of
        if(max[arr[i]] >  value){
            key = arr[i];
            value= max[arr[i]];
        }
    }
    return key;
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