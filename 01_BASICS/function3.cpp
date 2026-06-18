#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    int i;
    for(i=1;i<=n;i++){
        fact = fact * i;
    }return fact;
}

int nCr(int n, int r){
    int factn = fact(n);
    int factr = fact(r);
    int factnmr = fact(n-r);

    return factn/(factnmr*factr);
}

int main(){
    cout<<nCr(8,2);
}