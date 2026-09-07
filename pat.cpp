#include <iostream>
using namespace std;

class Patient {
    int id;
    string name;
    int age;
    float charge;

public:
    Patient(int i, string n, int a) {
        id = i;
        name = n;
        age = a;
        charge = 500;
    }

    void display() {
        cout << "Patient ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Consultation Charge: Rs." << charge << endl;
    }
};

int main() {
    Patient p(101, "Rahul", 20);

    p.display();

    return 0;
}
