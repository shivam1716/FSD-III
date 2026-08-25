// Shivam Singh (2503201001090)

#include <iostream>
using namespace std;

class student {
private:
    // Data members (attributes)
    int rollno;
    string name;
    float marks;

public:
    void input() {
        cout << "Enter roll number: ";
        cin >> rollno;

        cin.ignore(); // To ignore the newline character

        cout << "Enter name: ";
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        return;
    }
};

int main() {
    student s1; // Object of class student

    s1.input();   // Calling input function
    s1.display(); // Calling display function

    return 0;
}