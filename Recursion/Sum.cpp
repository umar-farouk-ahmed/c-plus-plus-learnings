#include<iostream>
using namespace std;
// Example Execution:
// If the user inputs 4, the sequence of function calls and returns would be:

// sum(4) calls sum(3), which calls sum(2), which calls sum(1), which calls sum(0).
// sum(0) returns 0.
// sum(1) returns 1 + 0 = 1.
// sum(2) returns 2 + 1 = 3.
// sum(3) returns 3 + 3 = 6.
// sum(4) returns 4 + 6 = 10.
int sum(int n){               
    if(n == 0){              
        return 0;
    }
    return n + sum(n-1);
}

int main(){
    int n;
    cout << "Enter a number to get the sum : ";
    cin >> n ;
    cout << "Result : "<<sum(n) << endl;
}
