#include<iostream>
using namespace std;
int Prime(int n){
    if(n<2){
        cout<<n<<" is not Prime";
    }
    else if(n==2){
        cout<<n<<" is Prime";
        return 0;
    }
    else{
        for(int i=2 ; i<n ; i++){
            if(n%i==0){
                cout<<n<<" is not Prime";
                return 0;
            }
            else{
                cout<<n<<" is Prime";
                break;
            }
        }
    }
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;

    Prime(num);
    return 0;

}