//sorting array using selection sort
#include <bits/stdc++.h>
using namespace std;

void Selection_sort(int arr[],int n ){
    for(int i=0;i<=n-2;i++){ //taking i<=n-2 and not <=n-1 because when iteration reaches to n-1 (i.e. last element) , there is no next element to be compared with n-1  
        int min = i;        
        for (int j=i;j<=n-1;j++){ 
            if (arr[min]>arr[j]){
                min = j;
            }
        }
        //swap function 
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;    
    }
    cout<< "sorted elements: "<<endl;
    for (int i = 0; i < n; i++) {
    cout << arr[i]<<" " ;
    }
}
int main (){
    int n ; 
    cout<<"enter array size: "<<endl;
    cin >>n;
    int arr[n];
    cout<< "enter array elements: "<<endl;
    for (int i = 0 ; i<n ;i++){
        cin>> arr[i];
    }
    cout<< "Elements to sort: "<<endl;
    for (int i = 0 ; i<n ;i++){
        cout << arr[i]<<" ";
    }
    cout << "\n" ;
    Selection_sort(arr,n);
    return 0;
}