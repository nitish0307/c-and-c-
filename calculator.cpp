#include<iostream>
using namespace std;

int main(){
    char op;
    float num1, num2;


    cout << "enter the operator : +, -, *, / :";
    cin >> op;

    cout << "enter two operands :" ;
    cin >> num1 >> num2;

    switch (op){

        case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

        case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

        case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

        case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

        default:
        cout << "Error ! entered operator is not correct" ;
        break;




    }

    return 0;
}