#include <bits/stdc++.h>
using namespace std;

// factorial using recursion(functional way)
int fact(int n){
    if (n==1){
        return 1;
    }
    return n * fact(n-1);

}

int main(){
    int n , i ; 
    cout<<"Enter n: "<<endl;
    cin>> n ;
    cout<<fact(n);
    
}