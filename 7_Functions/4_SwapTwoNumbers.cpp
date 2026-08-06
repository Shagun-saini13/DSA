#include<iostream>
using namespace std;

void Swap(int &a, int &b){
    int temp = b;
    b=a;
    a=temp;

}
int main(){
    int a, b;
    cout<<"Enter First number: ";
    cin>>a;

    cout<<"Enter Second number: ";
    cin>>b;

    Swap(a,b);
    cout<<"Numbers after Swap: "<<a<<" "<<b;
}