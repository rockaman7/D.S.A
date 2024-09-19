#include <bits/stdc++.h>
using namespace std;

//print name n time using recursion

//normal way---------------------------------------

// void print(int i,int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout <<"am"<< endl;
//     }i++;
// }
// int main(){
//     int i,n ;
//     cout <<"enter n : ";
//     cin >> n ;
//     print(i,n);   
// }


// now , using recursion----------------------------

void f( int i,int n){
    if (i>n) 
    return;
    cout<<"aman"<< endl;
    f(i+1,n);   
}

int main(){
    int i=1,n;
    cout<< "n: ";
    cin>> n;
    f(i,n);
}
