#include<iostream>
using namespace std;
int main(){
    int power;
    int num;

    cout<<"Enter Number: ";
    cin>>num;

    cout<<"Enter Power of number: ";
    cin>>power;

    int n=1;

    for(int i=1 ; i<=power ; i++){
        n *=num;
    }
    cout<<n;
}