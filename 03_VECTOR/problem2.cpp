#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>& rev){
    int length = rev.size();
    int start = 0;
    int end = length - 1;
    while(start < end){
        std::swap(rev[start], rev[end]);
        start++; end--;
    }
    cout << "Reverse list: ";
    for(int v : rev) cout << v << " ";
    cout << endl;
}

int main(){
    int length = 5;
    vector<int> rev = {2,5,4,6,7};
    reverse(rev);
}