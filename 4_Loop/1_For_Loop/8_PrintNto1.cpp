#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter number from which you want to start counting in decending order: ";
    cin>>n;

    for(int i=n ; i>=1 ; i--){
        cout<<i<<endl;
    }
    return 0;
}