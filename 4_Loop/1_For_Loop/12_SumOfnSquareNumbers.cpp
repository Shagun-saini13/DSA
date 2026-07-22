#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number upto which you want Sum of Square of Numbers: ";
    cin>>num;

    int sum = 0;

    for(int i=1 ; i<=num ; i++){
        sum = sum + (i*i);
    }
    cout<<sum;
}