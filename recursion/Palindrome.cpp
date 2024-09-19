#include <bits/stdc++.h>
using namespace std;

bool f (int i , string &s){
    if ( s[i]!=s[s.size()-i-1]){
        return false;
    }
    if ( i>=s.size()/2){
        return true;
    }
    return f(i+1,s);
}
int main(){
    int i;
    cout<< "Enter any word  :"<<endl;
    string s ;
    cin >> s; 
    cout<< f(0,s)<< " ";
}