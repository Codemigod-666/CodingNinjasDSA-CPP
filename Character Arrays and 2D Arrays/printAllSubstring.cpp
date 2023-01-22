#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"



void printSubstrings(char input[]){
    for(int k = 0 ; input[k]!= '\0' ; k++){
        for(int i = k ; i != input[k] ; i++){
            for(int j = k ; j<=i ; j++){
                cout<<input[j];
            }
            cout<<endl;
        }
    }
}





int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}