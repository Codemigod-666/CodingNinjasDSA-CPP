#include <iostream>
using namespace std;

// #include "solution.h"
int duplicateNumber(int *arr, int size)
{
    //Write your code here
    int i , j;
    int element;
    for(i = 0 ; i< size ; i++){
        for( j = 0 ; j< size ; j++){
            if(i != j && arr[i] == arr[j]){
                element = arr[i];
                break;
            }
        }
    }
    return element;
}

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

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}