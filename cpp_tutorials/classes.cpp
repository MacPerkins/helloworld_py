#include <iostream>
using namespace std;

class Car {
    public:
    string brand = "Ford";
    string model;
    int year;
};

int main() {
    Car car1;
    car1.brand = "Ford";
    car1.model = "Fusion";
    car1.year = 2012;

    Car car2;
    car2.model = "Mustang";
    car2.year = 2013;

    cout << car2.year << " " << car2.brand << " " << car2.model;
    return 0;
}