#include<iostream>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2){
    cout << "Intersection: ";
    
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                break;  // Avoid duplicates
            }
        }
    }
    cout << endl;
}

int main(){
    int arr1[] = {2, 4, 6, 8};
    int arr2[] = {1, 3, 5, 2};
    
    int size1 = 4;
    int size2 = 4;
    
    intersection(arr1, size1, arr2, size2);
    
    return 0;
}