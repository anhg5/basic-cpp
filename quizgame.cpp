#include <iostream>


int main(){

    std::string questions[] = {"1. What year was C++ made?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor to C++?: ", 
                               "4. Is the Earth flat?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                               {"A. C", "B. C+", "C. C--", "D. B++"},
                               {"Yes", "Okay Yeah", "Sometimes", "My fartttttt yeah"}};

    char answerKey[] = {'C', 'B', 'A', 'D'};

    int sizeQuestions = sizeof(questions)/sizeof(questions[0]);
    int sizeOptions = sizeof(options)/sizeof(options[0]);
    char guess;
    int score;

    for(int i = 0; i < sizeQuestions; i++){
        std::cout << "------------------------------ \n";
        std::cout << questions[i] << '\n';
        std::cout << "------------------------------ \n";

        for(int j = 0; j < sizeOptions; j++){
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "Correct!\n";
            score++;
        }
        else{
            std::cout << "Wrong answer.\n";
            std::cout << "The answer was: " << answerKey[i] << '\n';
        }

    }

    std::cout << "Your final score was: " << score << "/4, or " << (score/(double) sizeQuestions)*100 << "%. \n";
    std::cout << "------------------------------ \n";

    switch(score){
        case 0:
            std::cout << "You failed miserably. Wow!";
            break;
        case 2:
            std::cout << "I guess you did okay. Nice try.";
            break;
        case 3:
            std::cout << "Amazing! You're almost there.";
            break;
        case 4:
            std::cout << "You did perfect. Couldn't have done better.";
            break;
    }

    return 0;
}