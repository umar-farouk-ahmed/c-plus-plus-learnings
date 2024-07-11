#include<iostream>
using namespace std;

struct employee
{
    string name;
    int id;
    float salary;
};

int main(){
    struct employee nabil;
    employee umar;
    umar.name="Umar Farouk Ahmed";
    umar.id=23531853;
    umar.salary=1000000;
    nabil.name="Nabil Adibur Rahman";
    nabil.id=23531873;
    nabil.salary=200000;
    cout << umar.name << endl << umar.id << endl << umar.salary << endl;
    cout << nabil.name << endl << nabil.id << endl << nabil.salary << endl;
}