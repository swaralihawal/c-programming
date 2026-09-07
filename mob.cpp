#include <iostream>
using namespace std;

class MobileRecharge {
    string mobile;
    float balance;

public:
    MobileRecharge(string m, float b) {
        mobile = m;
        balance = b;
    }

    void recharge(float amount) {
        balance += amount;
        cout << "Recharge successful.\n";
    }

    void deduct(float amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance.\n";
    }

    void display() {
        cout << "Mobile Number: " << mobile << endl;
        cout << "Balance: Rs." << balance << endl;
    }
};

int main() {
    MobileRecharge r("9876543210", 100);

    r.display();
    r.recharge(50);
    r.deduct(30);
    r.display();

    return 0;
}
