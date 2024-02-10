#include <iostream>
#include <string>
#include <algorithm>

void hangman() {

    std::string guess_word = "losange";
    std::string choice_word;
    int luck = 3;

    std::cout << "Welcome to Hangman\n";
    std::cout << "Guess the word\n";
    std::cout << "You have 3 chances\n";

    std::cin.ignore();
    std::getline(std::cin, choice_word);
    std::transform(choice_word.begin(), choice_word.end(), choice_word.begin(), ::toupper);

    while (choice_word != guess_word) {

        std::cout << "Missed ! try again\n";
        luck--;
        std::cout << "You have " << luck << " chances\n";
        std::cin >> choice_word;

        if(choice_word == guess_word) {
            std::cout << "Congratulations ! you found the answer\n";
            break;
        }

        if(luck == 1) {
            std::cout << "You have 0 chance \n";
            std::cout << "You lose ! the answer was " << guess_word << "\n";
            break;
        }
    }
}

int main() {

    hangman();

    return 0;
}