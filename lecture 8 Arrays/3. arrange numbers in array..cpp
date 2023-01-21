void arrange(int *arr, int n)
{
    //Write your code here
    int i , j = 0;
    if(n%2 == 0){
        for(i = 1 ; i<n ; i+=2){
            arr[j] = i;
            j++;
        }
        for(i = n ; i>0 ; i-=2){
            arr[j] = i;
            j++;
        }
    }
    else{
        for(i = 1; i<=n ;i+=2){
            arr[j] = i;
            j++;
        }
        for(i = n-1 ; i>0 ; i-=2){
            arr[j] = i;
            j++;
        }
    }
}