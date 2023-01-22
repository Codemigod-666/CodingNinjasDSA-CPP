#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"
// THIS IS THE REQUIRED SOLUTION FUNCTION
bool checkPalindrome(char arr[]) {
    // Write your code here
    int j = strlen(arr);
    for(int i = 0 ; i< j/2 ; i++){
        if(arr[i] != arr[j-i-1]) return false;
    }

    return true;
}



// THIS IS THE ALREADY GIVEN MAIN FUNCTION  :::::::::::::::::::::::::::::;;

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}