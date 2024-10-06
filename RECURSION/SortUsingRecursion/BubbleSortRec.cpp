//Bubble sorting using Recursion
#include <bits/stdc++.h>
using namespace std;
void Bubble_sort(int arr[], int n){
    //base case 
    if (n==1){
        return;
    }
        for (int j= 0 ; j< n-1; j++){
            if ( arr[j]>arr[j+1]){
                swap (arr[j],arr[j+1]);
                // int temp = arr[j + 1];
                // arr[j + 1] = arr[j];
                // arr[j] = temp;
            }
        }
        Bubble_sort(arr,n-1);
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
    cout <<"Elements to be sorted: "<< endl;
    for (int i = 0 ; i<=n-1;i++){
        cout <<arr[i]<< " ";
    }
    cout<< "\n";

    Bubble_sort(arr,n); 
    
    cout << "Sorted array: "<<endl;
    for (int i = 0 ; i<=n-1;i++){
    cout << arr[i]<<" ";
    }
}
