#include<iostream>
using namespace std;

int fibonacci(int n);

int main(){
    int n;
    cout << "Enter a number : " ;
    cin >> n ;
    cout << n <<"th fibonacci number is : "<<fibonacci(n) << endl;    
}
// 1 1 2 3 5 8 13 21 34
int fibonacci(int n){
    if(n <= 2){
        return 1;
    }
    int zeroth = 0 ;
    int first = 1 ;
    int 
}
