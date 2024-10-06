#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    int a=0,b=1;
        if (n == 0) {
            cout << a << " ";
            return a;
        }
    cout << a <<" "<< b << " ";
    for ( int i = 2 ;i <=n-1 ; i++){
        int num=a+b;
        cout<<num<<" ";
        a=b;
        b=num;
    }
    return b;
}

int main(){
    int n;
    cout<<" Enter any number : ";
    cin >> n;
    fib (n);
}