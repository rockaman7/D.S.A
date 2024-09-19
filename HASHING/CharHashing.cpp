#include <bits/stdc++.h>
using namespace  std;

int main (){
    string s ;
    cout<< "input string: "; 
    cin >>s ;

    //  pre computation i.e. storing count in hash array 

    int hash [256]={0}; //when string has both upper and smaller case characters
    for (int i = 0 ; i<=s.size();i++){
        hash [s[i]]++;   // s[i] is the position of characters in the input string               
    }

    /*----------------------------------------------------------------------------------------------------------------
    int hash [26]={0};                  //when string has only either upper case or smaller case characters
    for (int i = 0 ; i<=s.size();i++){
        hash [s[i]-'a']++;               // [char - 'a'] will give index of the character at which we have to do hashing || s[i] is the position of characters in the input string 
    }
    -------------------------------------------------------------------------------------------------------------------*/
    cout<< "no of query:  "<< endl ;
    int q ;
    cin >> q ;
    while ( q--){
        char ch ;
        cout << "input query: "<< endl ;
        cin >> ch ;
        cout << "frequency: ";
        cout << hash[ch-'a']<<endl;
    }
    return 0;
}