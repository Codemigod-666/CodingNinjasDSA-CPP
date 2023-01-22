#include <iostream>
using namespace std;

// #include "solution.h

void insertionSort(int *input, int size)
{
    //Write your code here
    int i , key , j;
    for(int i = 1; i< size; i++){
        j = i-1;
        key = input[i];
        while(j>= 0 && input[j]>key){
            input[j+1] = input[j];
            j--;
        }
        input[j+1] = key;
    }
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

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}