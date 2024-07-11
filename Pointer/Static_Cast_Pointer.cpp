#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    void *ptr = &a;
    int *new_ptr = static_cast<int *>(ptr);
    cout << "Value : " << *new_ptr << endl;
    cout << "Address: " << new_ptr << endl;

    return 0;
}