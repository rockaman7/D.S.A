//MERGE SORTING

#include <bits\stdc++.h>
using namespace std;

void merge_sort(int arr[],int n ){

}

int main (){
    int n ;
    cout<< "enter array size : "<< endl ;
    cin>> n ; 
    int arr[n];
    cout<<"enter array elements : "<<endl;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout <<"Elements to be stored: "<< endl;
    for (int i = 0 ; i<=n-1;i++){
        cout <<arr[i]<< " ";
    }
    cout<< "\n";
    merge_sort(arr,n); 
}