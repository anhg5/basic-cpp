#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main()
{
    double balance = 0;
    int choice = 0;

    std::cout << "----------WELCOME TO THE BANK----------\n";
    


    do{
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Funds\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit Program\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);


    switch(choice){
        case 1:
            std::cout << "--------------------------------\n";
            showBalance(balance);
            std::cout << "--------------------------------\n";
            break;
        case 2:
            std::cout << "--------------------------------\n";
            balance = balance + deposit();
            showBalance(balance);
            std::cout << "--------------------------------\n";
            break;
        case 3:
            std::cout << "--------------------------------\n";
            balance = balance - withdraw(balance);
            showBalance(balance);
            std::cout << "--------------------------------\n";
            break;
        case 4:
            std::cout << "--------------------------------\n";
            std::cout << "Thank you for choosing us!\n" << "----------PROGRAM END----------\n";
            break;
        default:
            std::cout << "--------------------------------\n";
            std::cout << "Invalid Response, try another: \n";
            std::cout << "--------------------------------\n";
            break;
        }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){

    double amount;

    std::cout << "Enter deposit amount: \n";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "Invalid response, please try again\n";
        return 0;
    }
    else if(amount > 1000000){
        std::cout << "For transactions over $1,000,000, please make an in person appointment with us.\n";
        return 0;        
    }
    else{
        return amount;
    }
}
double withdraw(double balance){
    
    double amount;

    std::cout << "Enter withdraw amount: \n";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "Insufficient funds, please try again.\n";
        return 0;
    }
    else if(amount < 0){
        std::cout << "Invalid response, please try again.\n";
        return 0;
    }
    else{
    return amount;
    }    
}