#include <iostream>
#include <ctime>

int main()
{
    int randNum;
    int guess;
    int tries = 3;

    srand(time(NULL));
    randNum = (rand() % 5 + 1);

    std::cout << "Random Number Guesser! (Guess the number between 1-5.) \n";

    while(tries > 0)
    {
        std::cout << "Guess a number: \n";
        std::cin >> guess;

        if (guess == randNum)
        {
            std::cout << "Congrats! You won!\n";
            break;
        }
        
        else
        {
            tries --;

            if(tries > 0){
                std::cout << "You have guessed wrong. You have " << tries << " attempts left. \n";

            }
            else{
                std::cout << "You've ran out of attempts. Game over!\n";
                break;
            }
        }
    }

    return 0;
}