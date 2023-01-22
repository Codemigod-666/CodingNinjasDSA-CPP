#include <iostream>
using namespace std;

// #include "solution.h"
void swapAlternate(int *arr, int size)
{
    //Write your code here
    int temp;
    for(int i = 1 ;i< size ; i+=2){
        temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i]= temp;
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
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}