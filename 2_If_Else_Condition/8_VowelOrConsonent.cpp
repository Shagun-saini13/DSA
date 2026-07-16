#include<iostream>
using namespace std;
int main(){
    char alphabet;
    cout<<"Enter alphabet: ";
    cin>>alphabet;


    if((alphabet>='a' && alphabet<='z') || (alphabet>='A' && alphabet<='Z'))
    {
        if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' ||       alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U')
        {

            cout<<alphabet<<" is vowel";
        }
        else{
            cout<<alphabet<<" is consonent";
        }
    }
    else{
        cout<<"Invalid input! Please enter an alphabet.";
    }

    return 0;
}