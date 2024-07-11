#include <iostream>
using namespace std;

void print(void *print, char x)
{
    switch (x)
    {
    case 'i':
        cout << print  << endl;
        cout << *((int*)print)  << endl;

        break;
    case 'c':
        cout << (*(char *)print) << endl;
        break;
    default:
        cout << "Please provide correct data type ! " << endl;
        break;
    }
}
int main()
{
    int a = 10;
    char c = 'g';
    print(&a, 'i');
    print(&c, 'c');
    return 0;
}