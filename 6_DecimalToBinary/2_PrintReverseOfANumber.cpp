#include<iostream>
using namespace std;
int main(){
    int n;
    int ans=0;

    cout<<"Enter number of digits you want to reverse: ";
    cin>>n;

     int arr[n];

    for(int i=0 ; i<=n-1 ; i++){
        cout<<"Enter "<<i+1<<" number: ";
        cin>>arr[i];
    }

    for(int i=n-1 ; i>=0 ; i--){
        ans = ans*10 + arr[i];
    }
    cout<<"Reversed Number = "<< ans;
    return 0;
}