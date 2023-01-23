#include <bits/stdc++.h>
#include <queue>

using namespace std;

void kSortedArray(int *input, int n , int k){
    priority_queue<int> pq;

    for(int i = 0 ;i < k ; i++){
        pq.push(input[i]);
    }

    int j = 0;
    for(int i = k; i< n ; i++){
        input[j] =pq.top();
        pq.pop();
        pq.push(input[i]);
        j++;
    }
    while(j<n){
        input[j] = pq.top();
        pq.pop();
        j++;
    }
}
int main(){
    int arr[5] = {12,15,6,7,9};
    kSortedArray(arr, 5, 3);
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";
    }
 cout<<endl;
}