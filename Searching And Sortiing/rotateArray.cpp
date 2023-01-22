#include <iostream>
using namespace std;
void reverse(int *arr, int si,  int ei){{
    while(si < ei){
        int temp = arr[si];
        arr[si] = arr[ei];
        arr[ei] = temp;
        si++;
        ei--;
    }
}

}
void rotate(int *arr, int d, int size){
    reverse(arr, 0, size-1);
    reverse(arr, 0,size -d -1);
    reverse(arr,size - d, size-1);
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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}