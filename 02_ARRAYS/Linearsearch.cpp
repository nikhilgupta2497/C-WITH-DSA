#include<iostream>
using namespace std;
// int main(){
//     int array[5] = {2,5,3,4,1};
//     int size = 5;
//     int key = 4;
//     for(int i=0;i<size;i++){
//         if(array[i]==key){
//             cout<<i;
//         }
//     }

// }

int lineasearch(int arr[], int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }return -1;
}

int main(){
    int arr[] = {2,5,6,11};
    int size = 4;
    int key = 11;
    cout<<lineasearch(arr,size,key);
}