#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
     int N;
     cin>>N;

     int * arr= new int (N);
     int sum = 0;

     for(int i = 0; i< N ; i++){
         cin>>arr[i];
         sum+= arr[i];
     }
     cout<<sum<<endl;
     
    
}

