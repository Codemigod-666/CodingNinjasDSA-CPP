#include <iostream>
using namespace std;

void wavePrint(int **input, int nRow, int mCol){
	for(int i = 0 ; i< mCol ; i++){
		if(i%2 == 0){
			for(int j = 0 ; j < nRow; j++){
				cout<<input[j][i]<<" ";
			}
		}
		else{
			for(int j = nRow-1 ; j >= 0 ; j--){
				cout<<input[j][i]<<" ";
			}
		}
	}
}
// #include "solution.h"

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}