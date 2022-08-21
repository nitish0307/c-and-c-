// #include<iostream>
// int main (int argc, char **argv)
// {
//     int firstNumber = 12;
//     int secondNumber = 9;

//     int sum = firstNumber + secondNumber;
//      std::cout << "the sum of the two numbers is :" << sum << std::endl;

//      return 0;

// }

#include <iostream>
using namespace std;

int addNumber(int first_param, int second_param){

    int result = first_param + second_param;
    return result;
}

int main (){
    int firstNumber {3};
    int secondNumber {7};

    cout << "first number : \n" << firstNumber;
    cout << "second number :\n" << secondNumber;

    int sum = firstNumber + secondNumber;
    cout << "sum :\n" << sum;

    sum = addNumber(25, 7);
    cout << "sum :\n  " << sum;

    

    return 0;
}