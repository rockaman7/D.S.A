// Fibonacci  no using recursion (we use MULTIPLE recursion concept)
//e.g. - 1 1 2 3 5 8 13 21

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
    cout<< "n: ";
    cin>> n ;
    cout << fib(n); // we are finding fibonacci number at nth position of fibonacci series
    return 0;
}