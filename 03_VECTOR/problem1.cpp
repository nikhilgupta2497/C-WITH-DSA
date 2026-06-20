#include<iostream>
#include<vector>
using namespace std;
void linearsearch(vector<int> vec){
    int size;
    int key = 7;
    for(int i = 0;i<size;i++){
        if(vec[i]==key){
            cout<<i;
        }
    }
    }

int main(){
    vector<int> vec = {2,5,4,7};
    int size = 4;
    linearsearch(vec);
}    