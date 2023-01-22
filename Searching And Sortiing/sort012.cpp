//we have to sort the zeroes , ones and twos in the given array
#include <iostream>
#include <algorithm>
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

		sort012(arr, size);

		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}

		delete[] arr;
		cout << endl;
	}

	return 0;
}