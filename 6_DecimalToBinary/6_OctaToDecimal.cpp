#include<iostream>
using namespace std;
int main(){
    int num;
    int rem;
    int mul=1;
    int ans=0;

    cout<<"Enter number: ";
    cin>>num;

    while(num>0){

        rem = num % 10;
        num = num/10;
        ans = rem*mul + ans;
        mul = mul*8;
    }
    
    cout<<"Decimal form of Octa is: "<<ans;
}