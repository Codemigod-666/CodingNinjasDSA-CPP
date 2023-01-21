int findUnique(int *arr, int size)
{
    //Write your code here
    int unpaired = arr[0];
    for(int i = 1; i < size ; i++){
        unpaired = unpaired^ arr[i];
        
    }
    return unpaired;
}

//  ANOTHER METHOD TO FIND THE UNIQUE ELEMENT IN THE ARRAY
// THIS IS  QUITE THE SIMPLE METHOD AND THIS WILL HELP US FURTHER

int findUnique(int *arr, int size)
{
    //Write your code here
    int i , j;
    for(i = 0 ; i< size ;i++){
        for(j = 0 ; j< size ; j++){
            // IF WE FIND THE DUPLICATE WE STOP
            // THE WE INCREMENT TO NEXT INDEX AND FURTHER FIND ITS DUPLICATE ALSO
            if(i!= j && arr[i] == arr[j]){
                break;
            }
        }
        // IF NO DUPLICATE IS FOUND, THEN THE J BECOMES EQUAL TO THE SIZE OF THE ARRAY
        // WE RETURN THE ELEMENT AT THE iTH INDEX AS IT HAS NO DUPLILCATE INSIDE ARRAY

        if(j == size){
            return arr[i];
        }
    }
}