#include <iostream>
using namespace std;

class Library
{
protected:
    string library_name;

public:
    void getLibrary()
    {
        cout << "Enter Library Name: ";
        cin >> library_name;
    }
};

class Book : public Library
{
public:
    void displayBook()
    {
        cout << "\nBook belongs to: " << library_name << endl;
        cout << "Type: Book" << endl;
    }
};

class Magazine : public Library
{
public:
    void displayMagazine()
    {
        cout << "\nMagazine belongs to: " << library_name << endl;
        cout << "Type: Magazine" << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    b.getLibrary();
    b.displayBook();

    m.getLibrary();
    m.displayMagazine();

    return 0;
}
