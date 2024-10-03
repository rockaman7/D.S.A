#include<bits/stdc++.h>
using namespace std;

bool CheckArmstrong(long long x){
    long long temp=x;
    long long sum= 0;
    int  k = to_string(x).length();
    while(temp>0){
        int end = temp%10;
        sum=sum +(long long)round(pow(end,k)); //// Use round() to avoid precision errors
        temp=temp/10;
    }
    return sum==x;
}
int main (){
    long long x;
    cout<<"Enter any number to check: "<<endl;
    cin>>x;
    if (CheckArmstrong(x)){
        cout<<"Yes, "<<x<<" is an armstrong number. "<< endl;
    }else{
        cout <<"No, "<<x<<" is not an armstrong number. "<<endl;
    }
    return 0;
}