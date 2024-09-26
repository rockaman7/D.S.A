// find the highest/lowest frequency element in Array of size n 

#include <bits/stdc++.h>
using namespace std ;
//-----------------------------using two loops-------------------------
/*
void findFreq(int arr[],int n){
    vector <bool> checked(n,false);
    int maxFreq=0 ;
    int minFreq=n;
    int maxElement=0;
    int minElement=0;
    for (int i = 0 ; i<n ; i++){
        if (checked[i]==true)
            continue;
        int count=1;
        for (int j=i+1; j<n; j++){
            if (arr[i]== arr[j]){
                checked[j]=true;
                count++;
            }
        }
        //max freq
        if (count > maxFreq){
            maxElement= arr[i];
            maxFreq = count;
        }
        //minFreq
        if (count < minFreq){
            minElement= arr[i];
            minFreq= count;
        }
    }
    cout<<"Max Frequency Element: "<< maxElement<< " : Frequency: "<<maxFreq<<endl ;
    cout<<"Min Frequency Element: "<< minElement<< " : Frequency: "<<minFreq<<endl ;
} */
//----------------------using MAP----------------------------------------------------
void findFreq(int arr[],int n){
    unordered_map<int,int> m;
    int maxFreq=0 , minFreq = n;
    int maxElement= 0 , minElement = 0;
    for(int i=0;i<n;i++){ // traverse the array and count frequency 
        m[arr[i]]++;
    }
    //to iterate through the map
    for (auto it:m){
        int element= it.first;
        int count= it.second;   

        if(count>maxFreq){
            maxElement= element;
            maxFreq = count;
        }
        if ( count < minFreq){
            minElement= element;
            minFreq = count;
        }
    }
    cout<<"Max Frequency Element: "<< maxElement<< " and Frequency: "<<maxFreq<<endl ;
    cout<<"Min Frequency Element: "<< minElement<< " and Frequency: "<<minFreq<<endl ;
}
//------------------------------------------------------------------------------------
int main(){
    int n ;
    cout<<"enter array size: "<<endl;
    cin>> n;
    int arr[n];
    cout<<"enter array elements: "<< endl;
    for (int i=0; i<n ; i++){
        cin>> arr[i];
    }
    findFreq(arr,n);
    return 0;
}
