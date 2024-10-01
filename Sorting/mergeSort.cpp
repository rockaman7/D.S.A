//MERGE SORTING

#include <bits\stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
    {
        vector <int> temp; //creating a temporary array so that elements from two subarrays are sent
        int a = l;                  //starting index left array 
        int b = m+1;                //right array 
        while (a<=m && b<=r){       
            if(arr[a]<=arr[b]){     //storing in temp from array a 
                temp.push_back(arr[a]);
                a++;
            }else{
                temp.push_back(arr[b]); // storing in temp rom array b 
                b++;                
            }
        }
        while(a<=m){                    // if elements on the left half are still left to add to temp array
            temp.push_back(arr[a]);
            a++;
        }
        while(b<=r){                    // if elements on the right half are still left to add to temp array
            temp.push_back(arr[b]);
            b++;
        }
        for (int i=l;i<=r;i++){
            arr[i]=temp[i-l];
        }
    }
    void mergeSort(int arr[], int l, int r)
    {
        if ( l>=r)
        return;
        int m = (l+r)/2;
        mergeSort(arr,l,m);//left
        mergeSort(arr,m+1,r);//right
        merge(arr,l,m,r);   //sorting and merging
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
    mergeSort(arr,0,n-1);
    cout <<"Elements to be sorted: "<< endl;
    for (int i = 0 ; i<=n-1;i++){
        cout <<arr[i]<< " ";
    }
    return 0; 
}