#include<iostream>
using namespace std;

int factorial(int x);

int main(){
    int a;
    cout<<"Enter a number : " ;
    cin >> a;
    cout << endl;
    cout<<"\nThe factorial of "<<a<<" is " <<factorial(a);
}

int factorial(int x){
    if((x<=1) & (x>=0)){
        return 1;
    }
    else{
       return x * factorial(x-1);
    }  
}