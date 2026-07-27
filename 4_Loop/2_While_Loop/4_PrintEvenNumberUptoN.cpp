#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number upto which you want Even numbers: ";
    cin>>n;

    int i=0;
    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
        }
        i++;
    }
    return 0;
}