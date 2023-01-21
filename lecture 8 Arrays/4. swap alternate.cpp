void swapAlternate(int *arr, int size)
{
    //Write your code here
    int t;
    int i = 0,j = i+1;
    while(j<size){
        t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i+=2;
        j+=2;
    }
}