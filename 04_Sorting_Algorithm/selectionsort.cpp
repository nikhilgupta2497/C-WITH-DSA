#include<iostream>
#include<stdio.h>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int smallestindex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[smallestindex]){
                smallestindex = j;
            }
        }swap(arr[i],arr[smallestindex]);
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
    int arr[] = {2,1,8,4,6};
    selectionsort(arr,n);
    printarr(arr,n);
    return 0;
    
}