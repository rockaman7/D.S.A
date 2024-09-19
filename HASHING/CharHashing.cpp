#include <bits/stdc++.h>
using namespace  std;

int main (){
    string s ;
    cout<< "input string: "; 
    cin >>s ;

    //prefetch
    int hash [26]={0};
    for (int i = 0 ; i<=s.size();i++){
        hash [s[i]-'a']++;  // [char - 'a'] will give index of the character at which we have to do hashing
                            // s[i] is the position of characters in the input string 
    } 

    cout<< "no of query:  "<< endl ;
    int q ;
    cin >> q ;
    while ( q--){
        char ch ;
        cout << "input queries: "<< endl ;
        cin >> ch ;
        cout << "frequency: ";
        cout << hash[ch-'a']<<endl;
    }
    return 0;
}