//Count frequency of each element in the array


#include<bits/stdc++.h>
using namespace std ;
// using two loop
void countFreq(int arr[],int n){

    vector <bool> visited(n,false);
    //visited vector with n elements.
    //All n elements in the visited vector will be initialized to false.
    for ( int i=0; i<n; i++){
        if (visited[i] == true)
        continue;

        int count=1;//count freq
        for (int j=i+1; j<n; j++){ 
        // taking j= i+1 as code compares arr[0] with the remaining elements (arr[1], arr[2], ..., arr[n-1]) to find duplicates.
        //If we started with j = i (i.e., j = 0), it would compare arr[0] with itself, which is pointless because arr[0]
            if (arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout << "Frequency of "<<arr[i]<<"->"<<count<< endl; 
    }                           
}
//Using Map
/*void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
}*/

int main (){
    int n ;
    cout << "Array size: "<< endl;
    cin>> n;
    int arr[n];
    cout<< "Enter array values: "<< endl;
    for (int i = 0 ;i < n ; i++){
        cin>> arr[i];
    }
    countFreq(arr,n);
    return 0 ;
}