#include <bits/stdc++.h>
using namespace std;

// reversing array using recursion
//we use SWAP function

void rev(int i,int arr[],int n){
    if (i>=n/2){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    rev(i+1,arr,n);
}

int main(){
    int n;
    cout<< "Enter array size :"<<endl;
    cin>> n;
    int arr[n]; 
    cout<<"Enter n elements: "<<endl;
    for(int i=0;i<n;i++){
    cin>> arr[i] ;
    }
    rev(0,arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}