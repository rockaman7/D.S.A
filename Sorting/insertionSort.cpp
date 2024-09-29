#include <bits\stdc++.h>
using namespace std;

void Insertion_sort(int arr[],int n ){
    for ( int i = 0 ; i<=n-1; i++){
        int j = i ;
        while ( j>0 && arr[j-1]> arr[j] ){ //condition is j>0 because we assume index 0 element as sorted and later we will compare arr[1] element with arr[0]  
            //swap (arr[j],arr[j+1]);
            int temp = arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;

            j--; //once the j and j-1 position values are swapped, we again repeatedly have to check that swapped element(i.e.swapped j) to the left elements from arr[j] to index 0.
                //and once j reaches index 0 , we will go for next iteration of i
        }
    }
    cout << "Sorted elements: "<< endl;
    for( int i = 0 ; i<=n-1;i++){
        cout<< arr[i]<< " "; 
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
    Insertion_sort(arr,n); 
}