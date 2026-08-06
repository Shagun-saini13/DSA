#include<iostream>
using namespace std;
char UpperCase(char &c)
{
    if(c>='a' && c<='z'){
        return c-32;
    }
    else{
        return c;
    }

}
int main(){
    char alphabet;
    cout<<"Enter LowerCase Alphabet: ";
    cin>>alphabet;

    if((alphabet>='a' && alphabet<='z') || (alphabet>='A' && alphabet<='Z')){
        cout<<"UpperCase of "<<alphabet<<" is: "<<UpperCase(alphabet);
    }
    else{
        cout<<"Enter Valid input";
    }

    
}