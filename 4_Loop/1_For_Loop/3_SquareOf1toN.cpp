#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number upto which you want square: ";
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        cout<<i*i<<endl;
    }
    return 0;
}