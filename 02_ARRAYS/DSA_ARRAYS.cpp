#include<iostream>
#include<climits>
using namespace std;
int main(){
    int smallest = INT_MAX;  //used to represent +infinity
    int size;
    int i;
    int smallestindex = 0;
    cout<<"size:";
    cin>>size;
    int number[size];
    cout<<"Enter Array: ";
    for(i=0;i<size;i++){
        cin>>number[i];
    }
    

    for(i=0;i<=size;i++){
        if(number[i]<smallest){
            smallest = number[i];
            smallestindex = i;
          };
    }cout<<"Smallest: "<< smallestindex;
}