#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number upto which you want Even numbers: ";
    cin>>n;

    for(int i=0 ; i<=n ; i+=2){
        cout<<i<<endl;
    }
    return 0;
}