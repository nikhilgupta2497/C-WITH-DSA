#include <iostream>
using namespace std;

int main() {
    int n;
    int i;
    cout << "Enter n: ";
    cin >> n;
    int fact = 1; 
    for(i=1;i<=n;i++){
        fact = fact*i;
    }cout<<fact;


}