#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    char func;
    double result;

    std::cout << "Calculator App, start!\n";

    std::cout << "Enter your first number: \n";
    std::cin >> a;

    std::cout << "Enter any operator (+, -, *, /): \n";
    std::cin >> func;


    std::cout << "Enter your second number: \n";
    std::cin >> b;

    switch(func){
        case '+':
            result = a + b;
            std::cout << "Your result is " << result << ".\n";
            break;
        case '-':
            result = a - b;
            std::cout << "Your result is " << result << ".\n";
            break;
        case '*':
            result = a * b;
            std::cout << "Your result is " << result << ".\n";
            break;
        case '/':
            result = a / b;
            std::cout << "Your result is " << result << ".\n";
            break;
        default:
            std::cout << "Please enter a valid number or operator.\n";
    }

    return 0;
}