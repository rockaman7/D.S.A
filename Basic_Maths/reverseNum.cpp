#include<bits/stdc++.h>
using namespace std;

int main (){
    int n; 
    cout << "Enter any number: "<<endl;
    cin>>n;
    int rev=0;
    while (n!=0){
        // rev=n%10 + 10*rev;
        // n=n/10;
        int ld = n%10 ;
        rev = ld + 10*rev;
        n = n/10;
    }
    cout<< rev;
}