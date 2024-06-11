#include <random>
#include <iostream>
using namespace std;

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 100);

    int target = distr(gen);

    int guess;
    int guessNumber = 1;
    cout << "Welcome to a number guessing game. Guess a number between 1-100: ";

    while (true) {
        cin >> guess;

        if (guess < target) {
            cout << "Too low! Try again: ";
            guessNumber += 1;
        } else if (guess > target) {
            cout << "Too high! Try again: ";
            guessNumber += 1;
        } else {
            cout << "You win! You guessed the correct number!";
            cout << "You took " << guessNumber << " guesses to get it right." << endl;
            break;
        }
    }
    return 0;
}