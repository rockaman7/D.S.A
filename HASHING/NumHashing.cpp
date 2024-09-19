#include <bits/stdc++.h>
using namespace std;
// given array of 'n' integers , given 'q' queries and in each query , given a 'number' to be checked 
//print count of that 'number' in that array 
int main (){
    int n ;
    cout<< "Array size : ";
    cin >> n ;
    int arr[n];
    cout<< "input array elements: "<<endl;
    for (int i =0; i<n ;i++){
        cin >> arr[i];        //array input
    }
     
    int h[13]={0};                  //this is the hash array ,, we have taken its size as 13 as max element in array is 12(let)
    for ( int i = 0 ; i<n ; i++  ){
        h[arr[i]]+=1;               // this is used later i h[number] to check frequency by traversing in array .
    }

    int q ;
    cout<< "No of queries: ";
    cin >> q ;
    while (q--){
        int number ;
        cout<< "input numbers to check: "<<endl;
        cin >> number ;
        
        cout << "frequency: "<<endl;
        cout << h[number]<<endl; // for each query , checks frequency of queried number from h array (which is hash array ) and outputs it .
    }


}