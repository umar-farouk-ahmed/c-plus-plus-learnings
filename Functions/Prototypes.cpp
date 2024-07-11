#include<iostream>
using namespace std;

int sum(int x,int y);

int main(){
    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin >> num1 >> num2;
    cout<<sum(num1,num2);
}

int sum(int x, int y){
    return x+y;
}