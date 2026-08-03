#include<iostream>
using namespace std;
void Prime(int n){
    if(n<2){
        cout<<n<<" is not Prime";
    }
    else if(n==2){
        cout<<n<<" is Prime";
    }
    else{
        for(int i=2 ; i<n ; i++){
            if(n%i==0){
                cout<<n<<" is not Prime";
            }
            else{
                cout<<n<<" is Prime";
            }
            break;
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