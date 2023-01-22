#include <iostream>
#include <climits>

using namespace std;

void findLargest(int **input, int row, int col){
    // let us assume that the row has the largest sum and
    int numIndex = 0, largestSum = INT_MIN;
    int rowsum = 0;
    int colsum = 0;
    bool isrow = true;


    // find the largest sum of the rows

    for(int i = 0 ; i<row; i++){
        rowsum = 0;
        for(int j = 0 ; j < col; j++){
            rowsum += input[i][j];
        }
        if(rowsum > largestSum){
            largestSum = rowsum;
            numIndex = i;
        }
    }



    for(int i = 0 ; i< col ; i++){
        colsum = 0;
        for(int j = 0 ; j< row ; j++){
            colsum+= input[j][i];
        }
        if(colsum > largestSum){
            largestSum = colsum;
            numIndex = i;
            isrow = false;
        }
    }

    if(isrow){
        cout<<"row"<<" "<<numIndex<<" "<<largestSum;
    }
    else{
        cout<<"column"<<" "<<numIndex<<" "<<largestSum;
    }
}


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

		findLargest(input, row, col);
		cout << endl;
	}
}