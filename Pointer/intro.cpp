#include <iostream>
using namespace std;
int main()
{
    int var = 10;
    int *ptr = &var;
    int *ptr2 = nullptr;
    cout << "var " << var << endl;
    cout << "ptr " << ptr << endl;
    cout << "*ptr " << *ptr << endl;
    
    // ! Pointer to Pointer

    int **c = &ptr;
    cout << "Address of pointer ptr: " << &ptr << endl;
    cout << "Address of pointer ptr: " << c << endl;
    cout << "*c: " << *c << endl;
    cout << "**c: " << **c << endl;

    // ! Arrays and Pointer

    int marks[]={10,20,30,40,50};
    int *m = marks;
    cout << "m: " << m << endl;
    cout <<"*m: " << *m << endl;
    cout << "*(m+2): " << *(m+2) << endl;
}