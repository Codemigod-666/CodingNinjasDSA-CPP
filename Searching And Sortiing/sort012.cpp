//we have to sort the zeroes , ones and twos in the given array

#include <iostream>
using namespace std;

// this  is the solution function for the given array
void sort012(int *arr, int n)
{
    //Write your code here
    int i = 0;
    int nextzero = 0;
    int nexttwo = n-1;

    while(i<= nexttwo){
        if(arr[i] == 0){
            
            arr[i] = arr[nextzero];
            arr[nextzero] = 0;

            i++;
            nextzero++;
        }
        else if(arr[i] == 2){
            arr[i] = arr[nexttwo];
            arr[nexttwo] = 2;
            nexttwo--;
        }
        else{
            i++;
        }
    }
}




// this is the already given main code of the problem:::::::::::::::::::::::::::::::::::::

int main(){
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