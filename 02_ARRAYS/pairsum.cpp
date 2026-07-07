#include<iostream>
#include<vector>
using namespace std;
void pairsum(vector<int> num,int target,int n){
    for(int st=0;st<n;st++){
       for(int end=st+1;end<n;end++){
        if(num[st]+num[end]==target){
            cout<<st<<" "<<end;
        }
    }}
}

int main(){
    vector<int> num = {4,5,6,2};
    int target = 10;
    int n = 4;
    pairsum(num,target,n);
    return 0;
}