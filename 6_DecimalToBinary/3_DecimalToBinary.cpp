#include<iostream>
using namespace std;
int main(){
    int base=2;
    int rem;
    int num;
    int ans=0;
    int mul=1;

    cout<<"Enter Decimal integer: ";
    cin>>num;

    while(num>0){
        rem= num % base;
        num= num / base;
        ans = ans + rem*mul;
        mul*=10;
    }
    cout<<ans;

    return 0;
}