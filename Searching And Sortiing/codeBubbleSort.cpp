#include <iostream>
using namespace std;

//THIS IS THE SIMPLE BUBBLE SORT FUNCTION:::::::::::::::::::::::::::::::::::::::::

void bubbleSort(int *input, int n)
{
    //Write your code here
    for(int i = 0 ; i< n ; i++){
        int smallest = input[i], index = i;
        for(int j = i+1 ; j< n ; j++){
            if(smallest > input[j]){
                smallest = input[j];
                index = j;
            }
        }
        int temp= input[index];
        input[index] = input[i];
        input[i]= temp;
    }
}







//  THIS IS THE ALREADY PROVIDED MAIN FUNCTION :::::::::::::::::::::::::::

int main()
{

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

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}