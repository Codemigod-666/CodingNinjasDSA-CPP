#include <iostream>
#include <cstring> 


// #include "solution.h"
using namespace std;

void reverse(char input[], int start , int end){
    int i = start;
    int j = end;
    while(i< j){
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}

void reverseStringWordWise(char input[]){
    int len = strlen(input);
    int start= 0;
    int end = len-1;

    reverse(input, start, end);
    int i;
    int j = 0;
    for(i = 0 ; i< len ;){
        if( input[i] == ' '){
            reverse(input, j, i-1);
            j = i+1;
            i = j;
        }
        else{
            i++;
        }
    }

    if( i == len){
        reverse(input,j, i-1);
    }
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
