#include<iostream>
using namespace std;

int sum(int n, int m){
    int add = n+m;
    return add;
}
int main(){
    int num1, num2;
    cout<<"Enter two number you want to add\n";

    cout<<"Enter First number: ";
    cin>>num1;

    cout<<"Enter Second number: ";
    cin>>num2;

    cout<<"Sum of two number is: "<<sum(num1, num2);

}