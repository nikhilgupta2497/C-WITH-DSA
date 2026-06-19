#include<iostream>
using namespace std;

void swap(int arr[], int size){
    int minIndex = 0, maxIndex = 0;
    
    // Find index of minimum element
    for(int i = 0; i < size; i++){
        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }
    
    // Find index of maximum element
    for(int i = 0; i < size; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
    }
    
    // Swap min and max
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
}

int main(){
    int arr[] = {4, 5, 11, 6};
    int size = 4;
    
    cout << "Before swap: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    swap(arr, size);
    
    cout << "\nAfter swap: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}