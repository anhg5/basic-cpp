#include <iostream>
#include <ctime>

char getUserChoice();
char getCompChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getCompChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);


    return 0;
}

char getUserChoice(){

    char player;

    do{
    std::cout << "Rock, Paper, Scissors, Shoot! \n";
    std::cout << " 'R' for rock.\n";
    std::cout << " 'P' for paper.\n";
    std::cout << " 'S' for scissors.\n";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's' && player != 'R' && player != 'P' && player != 'S');

    return player;
}
char getCompChoice(){

    srand(time(NULL));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: 
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }

    return 0;
}
void showChoice(char choice){

    switch(choice){
        case 'r': 
            std::cout << "Rock\n";
            break;
        case 'p':
            std::cout << "Paper\n";
            break;
        case 's':
            std::cout << "Scissors\n";
            break;
    }

}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r':
            if(computer == 'r'){
                std::cout << "It's a tie!\n";
            }
            else if(computer == 's'){
                std::cout << "You won!\n";
            }
            else{
                std::cout << "You lost!\n";
            }
            break;
        case 'p':
            if(computer == 'p'){
                std::cout << "It's a tie!\n";
            }
            else if(computer == 'r'){
                std::cout << "You won!\n";
            }
            else{
                std::cout << "You lost!\n";
            }
        case 's':
            if(computer == 's'){
                std::cout << "It's a tie!\n";
            }
            else if(computer == 'p'){
                std::cout << "You won!\n";
            }
            else{
                std::cout << "You lost!\n";
            }
    }
}