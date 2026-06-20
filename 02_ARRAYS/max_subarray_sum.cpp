#include<iostream>
#include <climits>
using namespace std;
int main(){
    int arr[] = {2,4,5,1,8};
    int n = 5;
    int maxsum = INT_MIN;
    for(int st=0;st<n;st++){
        int cursum = 0;
        for(int end = 0;end<n;end++){
            cursum+=arr[end];
            maxsum = max(cursum,maxsum);
        }
    }cout<<maxsum<<endl;
}