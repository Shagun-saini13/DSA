#include<iostream>
using namespace std;
int main(){
    int num;
    int mul = 1;
    int ans=0;

    cout<<"Enter number: ";
    cin>>num;

    while(num>0){
        int rem = num%8;
        num = num/8;
        ans = rem * mul + ans;
        mul = mul*10;
    }
    cout<<"Octa form of decimal is : "<<ans;
}