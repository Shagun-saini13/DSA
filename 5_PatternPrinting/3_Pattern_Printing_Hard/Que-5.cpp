#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;

    for(int i=1 ; i<=n ; i++){
        for(int j=n-i ; j>=1 ; j--){
            cout<<"  ";
        }
        for(int k=i ; k>=1 ; k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}