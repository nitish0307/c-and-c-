#include<iostream>

// int multiplyNumber(int first_param, int second_param){

//     int result = first_param * second_param;
//     return result;
// }

// int main(){
//     int firstNumber {5};
//     int secondNumber {5};

//     std::cout << "the first number is :" << firstNumber << std::endl;
//     std::cout << "the second number is :" << secondNumber << std::endl;

//     int product = firstNumber * secondNumber;
//     std::cout << "product :" << product << std::endl;

//     product = multiplyNumber( 6, 9);
//     std::cout << "product :" << product << std::endl;

//     return 0;



// }
int divideNumber( int first_term, int second_term){
    int result = first_term % second_term;
    return result;
}

int main(){
    int Number1 {8};
    int Number2 {2};

    std::cout << "the first number is: " << Number1 << std::endl;
    std::cout << "the second number is: " << Number2 << std::endl;

    int remainder = Number1 % Number2;
    std::cout << "remainder" << remainder << std :: endl;


   remainder = divideNumber( 25, 5);
    std::cout << "remainder" << remainder << std :: endl;

    return 0;

}