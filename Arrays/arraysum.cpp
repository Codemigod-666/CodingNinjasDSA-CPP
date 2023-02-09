#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
     int n;
     cin>>n;

     int * arr= new int (n);
     int sum = 0;

     for(int i = 0; i< n ; i++){
         cin>>arr[i];
         sum+= arr[i];
     }
     cout<<sum<<endl;
     
    
}

