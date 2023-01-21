int duplicateNumber(int *arr, int size)
{
    //Write your code here
    for(int i = 0 ;i<size ; i++){
        for(int j = i+1 ; j<size ;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
}

// method 2 this is quite a lengthy approach
but its quite logical.
though first one is easy and straight.

int duplicateNumber(int *arr, int size)
{	
    int paired ;
    //Write your code here
    for(int i = 0 ; i<size ; i++){
        int paired = 0;
        for(int j = i+1 ;j<size ;j++){
            paired = arr[i]^arr[j];
            if(paired == 0){
                return arr[i];
            }
        }
    }
}