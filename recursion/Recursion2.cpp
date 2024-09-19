#include <bits/stdc++.h>
using namespace std;

//print from 1 to N linearly--------------------

/*void f( int i,int n){
    if (i>n) {
    return;
    }
    cout<< i << endl;
    f(i+1,n);   
}
int main(){
    int i=1,n;
    cout<< "n: ";
    cin>> n;
    f(i,n);
}
*/

// print from N to 1 using recursion----------------

void f( int i,int n){
    if (i<1) 
    return;
    cout<< i << endl;
    f(i-1,n);   
}
int main(){
    int n=0,i;
    cout<< "N: ";
    cin>> i;
    f(i,n);
}