#include<iostream>
using namespace std;
void subarray(int arr[],int n){
    for(int st=0;st<n;st++){
        for(int end=0;end<n;end++){
            for(int i =st;i<=end;i++){
                cout<<arr[i];
            }cout<<" ";
        }cout<<endl;
    }
}

int main(){
    int arr[] = {4,5,3,6,2};
    int n = 5;
    subarray(arr,n);
}