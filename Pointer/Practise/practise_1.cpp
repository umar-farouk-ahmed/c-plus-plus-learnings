#include<iostream>
using namespace std;

void print(void *print , char x){
    switch(x){
        case 'i':
        cout<<*((int*)print)<<endl;
        break;
        case 'c':
        cout<<*((char*)print)<<endl;
        break;
    }
}

int main(){
    int num ;
    char c;
    print(&num , 'i');
    print(&c , 'c');

}