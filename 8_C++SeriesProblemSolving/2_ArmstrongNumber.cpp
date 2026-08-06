#include<iostream>
using namespace std;

int CountDigit(int n){
    int count=0;

    while(n){
        count++;
        int number = number/10;
    }
    return count;
}
int add(int n, int d){
    int sum=0;
    while(n){
        int rem= n%10;
        n = n/10;
        int power=1;

        for(int i=1 ; i<=d ; i++){
            int power = power*rem;
        }
        sum = sum+power;
    }
    return sum;
}



int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    int digit = CountDigit(num);
    int sum=add(num, digit);

    if(sum==num){
        cout<<"Number is Armstrong";
    }
    else{
        cout<<"Number is not Armstrong";
    }
}