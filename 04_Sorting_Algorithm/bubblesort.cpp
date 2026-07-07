#include<stdio.h>
#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        
        for(int j = 0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
        }
        
    }
}

void printarr(int arr[],int n){
    for(int i =0;i<n;i++){
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main(){
    int n = 5;
    int arr[] = {2,5,1,3,8};
    bubblesort(arr,n);
    printarr(arr,n);
    
}