#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a vector for integers -----
    vector<int> myInts({1, 2, 3, 4, 5});

    cout << "Output beginning of vector: " << *myInts.begin() << endl;

    cout << "Output of entire vector: ";
    for (auto i = myInts.begin(); i != myInts.end(); i++)
        cout << *i << " ";

    cout << "\nVector size: " << myInts.size() << endl;

    // Create a vector for integers -----
    vector<string> myStrings({"Hello", "world!", "My", "name", "is", "C++."});

    cout << "Output beginning of vector: " << *myStrings.begin() << endl;

    cout << "Output of entire vector: ";
    for (auto i = myStrings.begin(); i != myStrings.end(); i++)
        cout << *i << " ";

    cout << "\nVector size: " << myStrings.size() << endl;

    return 0;
}