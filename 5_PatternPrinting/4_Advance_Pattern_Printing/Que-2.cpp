#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter rows: ";
    cin>>row;

    for(int i=0 ; i<=row ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<"  ";
        }
        for(int j=1 ; j<=2*row-1-2*i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}