#include<bits/stdc++.h>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int arr[1000000];
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum<<endl;
}