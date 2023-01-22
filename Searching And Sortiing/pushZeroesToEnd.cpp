#include <iostream>
using namespace std;

// #include "solution.h"
// this is the solution function for the given problem:::::::::::::::::::
void pushZeroesEnd(int *input, int size)
{
    //Write your code here
    int i = 0, k = 0;

    while(i< size){
        if(input[i] != 0 && i == k){
            i++;
            k++;
        }
        else if(input[i] == 0){
            i++;
        }
        else{
            int temp = input[i];
            input[i] = input[k];
            input[k] = temp;
            i++;
            k++;
        }
    }
}





// this is the already provided code of main function:::::::::::::::::::::::::::::::::
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

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}