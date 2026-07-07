#include<stdio.h>
#include<iostream>
using namespace std;

void dnf(int nums[],int n){
        int low = 0,mid = 0,high = n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid],nums[high]);
                high--;
            }
    }
}

void printarr(int nums[],int n){
    for(int i =0;i<n;i++){
        cout << nums[i] << ' ';
    }
    cout << '\n';
}

int main(){
    int nums[] = {2,1,0,2,1,1};
    int n =6;
    dnf(nums,n);
    printarr(nums,n);
    return 0;
}