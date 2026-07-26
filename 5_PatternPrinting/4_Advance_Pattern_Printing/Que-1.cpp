#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter rows: ";
   cin>>n;
   
   for(int i=1 ; i<=n ; i++){
    for(int j=n-i ; j>=1 ; j--){
        cout<<"  ";
    }
    for(int k=1 ; k<=i ; k++){
        cout<<k<<" ";
    }
    for(int k=i-1 ; k>=1 ; k--){
        cout<<k<<" ";
    }
    cout<<endl;
   }
}