// THIS IS NOT THE BEST POSSIBLE APPROACH
// BUT THE BEST POSSIBLE APPROACH WILL BE
// DISCUSSED WHEN WE REACH THE DSA PART (TIME AND SPACE COMPLEXITY).


int findUnique(int *arr, int size)
{
    //Write your code here
    int i , j;
    for(i = 0 ; i< size ;i++){
        for(j = 0 ; j< size ; j++){
            // if we find the duplicate we stop
            // then we increment to next index and find it's duplicate.
            if(i!= j && arr[i] == arr[j]){
                break;
            }
        }
        // if no duplicate found, the j becomes equal to size and
        // we return the ith index as it has no duplicate in the array
        if(j == size){
            return arr[i];
        }
    }
}