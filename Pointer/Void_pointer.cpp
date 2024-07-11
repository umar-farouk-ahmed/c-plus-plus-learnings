#include<iostream>
using namespace std;

void print_num(int *num){
    cout << ++(*num)<< endl;
}

void print_char(char *y){
    cout << *y << endl;
}

int main(){
    int number = 50;
    char x = 'a';
    print_num(&number);
    print_char(&x);
    return 0;
}