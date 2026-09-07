#include <iostream>
using namespace std;

class LibraryBook {
    string title;
    bool issued;

public:
    LibraryBook(string t) {
        title = t;
        issued = false;
    }

    void issueBook() {
        if (!issued) {
            issued = true;
            cout << "Book issued successfully.\n";
        } else
            cout << "Book is already issued.\n";
    }

    void returnBook() {
        if (issued) {
            issued = false;
            cout << "Book returned successfully.\n";
        } else
            cout << "Book was not issued.\n";
    }

    void display() {
        cout << "Book Name: " << title << endl;
        cout << "Status: " << (issued ? "Issued" : "Available") << endl;
    }
};

int main() {
    LibraryBook b("C++ Programming");

    b.display();
    b.issueBook();
    b.display();
    b.returnBook();
    b.display();

    return 0;
}
