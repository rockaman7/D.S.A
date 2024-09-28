//sorting an array using bubble sort 
#include <bits/stdc++.h>
using namespace std;
void Bubble_sort(int arr[], int n){
    int Swapped=0;
//iteration method 1
/*  for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {  */

//iteration method 2
    for (int i = 0 ; i< n-1;i++){
        for (int j= 0 ; j< n-1; j++){
            if ( arr[j]>arr[j+1]){
                //swap (arr[j],arr[j+1]);
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;

                Swapped=1; // for optimized approach i.e when array is already sorted 
            }
        }

        if (Swapped==0){   // for optimized approach 
            break;
        }
    }
    cout << "Sorted array: "<<endl;
    for (int i = 0 ; i<=n-1;i++){
        cout << arr[i]<<" ";
    }
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
    Bubble_sort(arr,n); 
}
