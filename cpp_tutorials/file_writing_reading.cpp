#include <iostream>
#include <fstream>
using namespace std;

void createFile() {
    ofstream MyFile("filename.txt");

    MyFile << "This is my file. There isn't a ton of text, but that is okay because it is a test" << endl;
    MyFile << "Here is some more text to make a second line that I can read line by line in my readFile function" << endl;

    MyFile.close();
}

void readFile() {
    ifstream MyReadFile("filename.txt");

    string myText;
    while (getline (MyReadFile, myText)) {
        cout << myText << endl;
    }

    MyReadFile.close();
}

int main() {

    createFile();
    readFile();

    return 0;
}