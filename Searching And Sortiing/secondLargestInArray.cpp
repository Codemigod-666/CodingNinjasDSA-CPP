// find the second largest element in the array:::::::::::::::::::::
// first approach is to find the largest in the array and the  find the second largest 
// for this we have to traverse the array two times to get the answer:


//  so we will go to another approach for which we have to use some complex form of nested if-else conditions::::::::::::::::::::::::::::::::::::::::::::::::;

#include <iostream>
using namespace std;

// #include "solution.h"


int findSecondLargest(int *arr, int n) {
  // Write your code here
  int l = -2147483648, sl = -2147483648;
  for (int i = 0; i < n; i++) {
    if (l < arr[i]) {
      sl = l;
      l = arr[i];
    } else if (arr[i] < l && arr[i] > sl) {
      sl = arr[i];
    }
  }
  return sl;
}


//  this is the already provided main function code;:::::::::::::::::::::::::::::::::::

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

		cout << findSecondLargest(input, size) << endl;

		delete[] input;
	}

	return 0;
}