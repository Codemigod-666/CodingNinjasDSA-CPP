#include <iostream>
using namespace std;

// #include "solution.h"  

//  this is the function for Binary Search:::::::::::::::::::::::::::::::::

int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start = 0, end = n-1;
    int mid;
    while(start<= end){
        mid = (start+end)/2;
        if(input[mid] == val) return mid;
        else if(input[mid] < val){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        
    }
    return -1;
    
}







// THIS IS THE ALREADY PROVIDED MAIN FUNCTION :::::::::::::::::::::::::::::::::;

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}
