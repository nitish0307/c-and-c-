#include<iostream>
using namespace std;

int main(){
    // using temporary function
    // int a = 5, b = 10, temp;

    // cout << "Before Swapping" << endl;
    // cout << "a = " << a << " b = " << b << endl;

    // temp = a;
    // a = b;
    // b = temp;

    // cout << "\nAfter swapping" << endl;
    // cout << "a = " << a << " b = " << b << endl;

    // return 0;

    // without using temporary function

    int a = 5, b = 4;

    cout << "Before Swapping" << endl;
    cout << "a = " << a << " b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

  

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

