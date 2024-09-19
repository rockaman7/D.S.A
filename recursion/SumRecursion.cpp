#include <bits/stdc++.h>
using namespace std ;

//sum of n natural no. using recursion
//1.parametrized way 
// void f(int sum,int n ){
//     if (n<1){
//         cout << sum<<endl;
//         return ;
//     }
//     f(sum+n,n-1); 
// }

// int main (){
//     int n,sum=0;
//     cout<< "Enter n: "<< endl; 
//     cin>> n;
//     f(sum,n);
//     return 0;
// }

//2. functional way

int f(int n){
    if (n==0){
        return 0 ;
    }
    return n + f(n-1) ;
}
int main (){
    int n,i;
    cout<< "Enter n: "<< endl; 
    cin>> n;
    cout<<f(n);
    return 0;
}