void sortZeroesAndOne(int *arr, int size)
{
    int i = 0, j = size-1 , t;
    while(j>i){
    	if(arr[i]==0){
            if(arr[j]==1){
                i++;
                j--;
            }
            else if(arr[j]!= 1){
                i++;
                j-=0;
            }
        }    
        else if(arr[i]!=0){
            if(arr[j]!=1){
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
                i++;
                j--;
            }
            else if(arr[j]==1){
                j--;
                i+=0;
            }
        }
    }
    
}
// IN THIS WE WILL START COMPAIRING SIMULTANEOUSLY FROM THE START AND  THE END 
// SO THAT THE ONES SHOULD BE IN THE LAST AND THE ZERORS SHOULD BE IN THE FIRST
// AND IF NOT WE WOULD JUST SWAP
// BUT IF WE FIND THE ELEMENT FIRST ON THE RIGHT PLACE BUT LAST ON THE WRONG PLACE INCREMENT THE FIRST
// OPPOSITE TO THAT
// IF WE FIND THE LAST IN THE RIGHT PLACE BUT THE FIRST IN THE WORNG PLACE WE WOULD DECTEMENT THE LAST 
// BUT NOT INCREMENT THE FIRST TO STILL BE ABLE TO SWAP THE WRONG ELEMENT WITH THE ANOTHER WRONG ELEMENT.