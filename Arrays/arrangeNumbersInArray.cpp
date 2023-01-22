//  this program is to arrange the array in the provided way


#include <iostream>
using namespace std;

// #include "solution.h"
// this is the function for solution
void arrange(int *arr, int n)
{
    //Write your code here
    int  j = 0;
    if(n%2 == 1){
        for(int i = 1 ; i<=n ; i+=2){
            arr[j] = i;
            j++;
        }
        for(int i = n-1 ; i>1 ; i-=2 ){
            arr[j] = i;
            j++;
        }
    }
    else{
        for(int i = 1 ; i<n ; i+=2){
            arr[j] = i;
            j++;
        }
        for(int i = n ; i>1; i-=2){
            arr[j] = i;
            j++;
        }
    }

}
// this is the raw code of MAIN::::::::::::::::::::::::;
int main(){
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}