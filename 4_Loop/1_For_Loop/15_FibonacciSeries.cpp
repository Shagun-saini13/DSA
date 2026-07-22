#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter Number upto which you want Fibonacci Series: ";
    cin>>num;

    cout<<"0 ";
    cout<<"1 ";

    int last = 0;
    int prev = 1;
    int curr;

    for(int i=1 ; i<=num-2 ; i++){
        curr = prev+last;
        cout<<curr<<" ";
        last = prev;
        prev = curr;

    }
    return 0;

}