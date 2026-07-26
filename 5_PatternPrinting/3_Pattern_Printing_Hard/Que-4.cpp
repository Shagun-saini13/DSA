#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row: ";
    cin>>row;

    for(int i=1 ; i<=row ; i++){
        for(int j=row-i ; j>=1 ; j--){
            cout<<"  ";
        }
        for(char k='A' ; k<=64+i ; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}