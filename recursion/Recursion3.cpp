#include <bits/stdc++.h>
using namespace std;

//print from 1 to N linearly (by backtracking i.e. without using i+1)--------------------
//1.
/* void f( int n){
//     if (n<=0) 
//     return;
//     f(n-1);   
//     cout<< n << " ";
// }
// int main(){
//     int n;
//     cout<< "n: ";
//     cin>> n;
//     f(n);
}*/

//2nd way
/* void f( int i ,int n){
    if (i>n) 
    return;
    f(i,n-1);   
    cout<< n << " ";
}
int main(){
    int n,i=1;
    cout<< "n: ";
    cin>> n;
    f(i,n);
} */


// print from N to 1 using recursion(by backtracking i.e. without using i-1)----------------

void f( int i,int n){
    if (i>n) 
    return;
    f(i+1,n);   
    cout<< i << endl;
}
int main(){
    int n,i=1;
    cout<< "N: ";
    cin>> n ;
    f(i,n);
}