#include<iostream>
using namespace std;

void Sum(int arr[],int size){
    int add = 0;
    for(int i=0;i<size;i++){
        add =  add+arr[i];
    }
    cout<<"Sum: "<<add;
}

int main(){
    int arr[] = {2,5,3,4};
    int size = 4;
    Sum(arr,size);
}