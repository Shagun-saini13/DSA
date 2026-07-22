#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter the positive integer you want the factorial of: ";
    cin>>num;
    int fact = 1;

    for(int i=num ; i>=1 ; i--){
        fact = fact*i;
    }
    cout<<fact;
    return 0;
}