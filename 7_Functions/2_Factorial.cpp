#include<iostream>
using namespace std;

int fact(int n){
    int ans=n;
    for(int i=n-1 ; i>=1 ;i--){
        ans = ans*i;
    }
    return ans;
}
int main(){
    int num;
    cout<<"Enter number you want a factorial of: ";
    cin>>num;

    cout<<fact(num);
    return 0;
}