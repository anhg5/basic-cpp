#include <iostream> 

int main()
{
    double temp;
    double c;
    double f;
    char type;

    std::cout << "Temperature Conversion: \n";
    std::cout << "F = Fahrenheit\n" << "C = Celsius\n";

    std::cout << "Enter your type of temperature (C or F): ";
    std::cin >> type;

    std::cout << "Enter the current temperature: ";
    std::cin >> temp;

    switch(type){
        case 'c':
        case 'C':
            c = temp;
            f = ((c * (9.0 / 5.0)) + 32.0);
            std::cout << "Your temperature is " << f << " degrees in Fahrenheit.";
            break;
        
        case 'f':
        case 'F':
            f = temp;
            c = ((f - 32.0) * (5.0/9.0));
            std::cout << "Your temperature is " << c << " degrees in Celsius.";
            break;
        
        default:
            std::cout << "Please enter either a valid temperature value or type of temperature.";

    }

    return 0;
}