#include <iostream>
#include <queue>
#include <vector>
using namespace std;
// #include "Solution.h"

vector<int> kLargest(int arr[], int n, int k){
    priority_queue<int, vector<int> , greater<int>> pq;
    for(int i = 0 ; i< k; i++){
        pq.push(arr[i]);
    }

    for(int i = k ; i < n ; i++){
        if(arr[i]> pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    vector<int> output;
    while(! pq.empty()){
        output.push_back(pq.top());
        pq.pop();
    }
    return output;
}

int main() {
	
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
    
    int k;
    cin >> k;
    
    vector<int> output = kLargest(input, size, k);
    for(int i = 0; i < output.size(); i++)
        cout << output[i] << endl;
	
	return 0;
}