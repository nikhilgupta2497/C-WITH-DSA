#include<iostream>
using namespace std;

// void primenumber(int n){
//     int i;
//     for(i=2;i<n;i++){   // Function for prime number or not
//         if(n % i==0){
//             cout<<" Non Prime"<< endl;
//             return ;
//         }
//     }
//     cout<<"prime"<<endl;
// }

// int main(){
//     primenumber(14);
//     return 0;
// }

// PROBLEM-2

// void printprimenumber(int n){
//     bool isprime = true;
//     for(int i=2;i<n;i++){
//         if(n % i ==0){
//             isprime = false;
//             break;
//         }
//     }if(isprime){cout<<n<<" ";}
// }

// int main(){
//     for(int i=2;i<30;i++){
//         printprimenumber(i);
//     }
//     return 0;
// }

// PROBLEM-3

int fibonaci(int n){
   int a=0;
   int b=1;
   int nextterm = 0;
   for(int i=1;i<n;i++){
    if(i==1){
        cout<<a<<" ";
        continue;
    } if(i==2){
        cout<<b<<' ';
        continue;
    }nextterm = a + b;
   a = b;
   b = nextterm;

   cout<<nextterm<<" ";
   }
  
}

int main(){
    fibonaci(15);
}