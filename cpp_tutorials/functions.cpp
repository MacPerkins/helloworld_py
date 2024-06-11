#include <iostream>
using namespace std;

void outputGreeting() {
    cout << "Welcome to my program!\n";
}

void nameMaker(string first_name) {
    cout << first_name << " Doe\n";
}

int main() {
    outputGreeting();

    string first_name;
    
    cout << "Enter a first name and we will add a last name: ";
    cin >> first_name;
    
    nameMaker(first_name);
    
    return 0;
}