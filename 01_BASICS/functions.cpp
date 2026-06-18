#include<iostream>
using namespace std;

int product(int a, int b){ // parameters: It is the copy of the argument
    int c = a*b;  // Also called function declaration
    return c;
}

int main(){  //Also known as function call
    cout << product(2,3); // argument: In this we pass the actual value
}