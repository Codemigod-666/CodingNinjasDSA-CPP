#include <iostream>
#include <algorithm>
using namespace std;

// #include "solution.h"

void sortZeroesAndOne(int *arr, int size)
{
    int i = 0;
    int j = size-1;

    while(i<j){
        if(arr[i] == 1 && arr[j] == 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        if(arr[i] == 0){
            i++;
        }
        if(arr[j] == 1){
            j--;
        }
    }
}


int main(){

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}