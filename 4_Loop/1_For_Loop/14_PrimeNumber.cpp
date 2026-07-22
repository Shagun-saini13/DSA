#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    if(num<2){
        cout<<num<<" is not a Prime number";
    }
    else if(num==2){
        cout<<num<<" is a Prime number";
        return 0;

    }
    else{
        for(int i=2 ; i<num ; i++){
            if(num%i == 0){
                cout<<num<<" is not Prime number";
                return 0;
            }
        }
        cout<<num<<" is a Prime number";
    }
    return 0;
}