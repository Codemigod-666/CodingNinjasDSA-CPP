#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// i added the elements of two array in the form of interger

// and then i stored each element of the final sum according to the conditions of the

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    //Write your code here
    int sum1= 0;
    int sum2= 0;

    for(int i = 0 ; i< size1 ; i++){
        sum1 = (sum1*10)+input1[i];
    }
    for(int i = 0 ; i< size2 ; i++){
        sum2 = (sum2*10)+input2[i];
    }
    int s = (size1>size2)? size1: size2;

    int sum = sum1+sum2;
    s++;

    for(int i = 0 ; i< s ; i++){
        int t = pow(10, s-i);
        output[i] = (sum % t)/pow(10,s-i-1);
    }
}




// this  is the main function:::::::::::::::::::::::::::::::::::::

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size1;
		cin >> size1;

		int *input1 = new int[size1];

		for (int i = 0; i < size1; ++i)
		{
			cin >> input1[i];
		}

		int size2;
		cin >> size2;

		int *input2 = new int[size2];

		for (int i = 0; i < size2; ++i)
		{
			cin >> input2[i];
		}

		int outsize = 1 + max(size1, size2);

		int *output = new int[outsize];

		sumOfTwoArrays(input1, size1, input2, size2, output);

		for (int i = 0; i < outsize; ++i)
		{
			cout << output[i] << " ";
		}

		delete[] input1;
		delete[] input2;
		delete[] output;
		cout << endl;
	}

	return 0;
}