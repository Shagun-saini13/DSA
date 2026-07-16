// int -> 4 bytes (32 bits)
// char -> 1 byte (8 bits)

// Assigning an int to a char may cause data truncation
// if the value cannot be represented in 8 bits.

// signed char   : -128 to 127
// unsigned char : 0 to 255

// Plain char may be signed or unsigned depending on the compiler.

#include<iostream>
using namespace std;
int main(){
    int a = 122;
    char c;
    c = a;

    cout<<c;
}

/*
If an interviewer asks:

"Is char signed or unsigned in C++?"

A good answer is:

"char is implementation-defined. It may be signed or unsigned depending on the compiler and platform. If I need a specific behavior, I should use signed char or unsigned char explicitly."
*/