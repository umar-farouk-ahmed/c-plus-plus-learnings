#include<iostream>
using namespace std;

void swap_pointer(int *a, int *b){// ! Swaping using pointers
    int temp = *a;
    *a = *b;
    *b = temp; 
}

int main(){
    int num1 , num2;
    cin >> num1 >> num2;
    cout<<num1<<" "<<num2<<endl;
    swap_pointer(& num1, & num2);
    cout<<num1<<" "<<num2<<endl;
}