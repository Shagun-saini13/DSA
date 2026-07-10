#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    if(num==0){
        cout<<num<<" is Zero";
    }
    else if(num>0){
        cout<<num<<" is a Positive number";
    }
    else{
        cout<<num<<" is a Negative number";
    }
    return 0;
}
