#include <iostream>
#include <cstring>
using namespace std;


void trimSpaces(char str[]) {
    // Write your code here
    int i = 0 ,temp =0;
    for(i = 0 ; i<strlen(str) ;i++){
        if(str[i]!=' '){
            str[temp++] = str[i];
        }
    }
    str[temp] = '\0';
        
}








// #include "solution.h"

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}

