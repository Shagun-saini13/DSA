#include<iostream>
using namespace std;
int main(){
      int num;
      int ans=0;
      int rem;
      int mul=1;

      cout<<"Enter a Binary number: ";
      cin>>num;

      while(num>0){

        rem = num%10;
        num = num/10;

        ans = rem*mul + ans;
        mul = mul*2;
      }

      cout<<ans;
}