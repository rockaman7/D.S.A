// Write the Fibonacci number by its position in Fibonacci series using recursion (we use MULTIPLE recursion concept)

//e.g. -  1 1 2 3 5 8 13 21
//at position 6 , number is 8

#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if (n<=1){
        return n;
    }
    // int last = fib(n-1);
    // int secl = fib(n-2);
    // return last + secl ;  
    return fib(n-1)+fib(n-2); 
}

int main ( ){
    int n;
    cout<< "Enter any position in Fibonacci Series : ";
    cin>> n ;
    cout<< "Corresponding Fibonacci number: ";
    cout << fib(n); // we are finding fibonacci number at nth position of fibonacci series
    return 0;
}