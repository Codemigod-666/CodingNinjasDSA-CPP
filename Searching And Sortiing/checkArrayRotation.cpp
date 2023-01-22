#include <iostream>
using namespace std;

// #include "solution.h"

// we have to notice that we have given the array in ascending order 
// so to calculate the array rotation
// we just have to find the index of the first element that is not arranged in ascending order
//and then return that stored index:::::::::::::::::::::::::::::;:::::::

int arrayRotateCheck(int *arr, int size)
{
    int count = 0;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]>arr[i+1]){
            return i+1;
        }
        //break;
    }
    return 0;
}


// this is the provided main function of the problem check array sum::::::::::::::::

int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}