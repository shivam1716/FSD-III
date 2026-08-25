//Shivam SIngh (2503201001090)
#include <iostream>
using namespace std;
inline int add(int a, int b) {
    return a + b;
}
inline int subtract(int a, int b) {
    return a - b;
}
inline int multiply(int a, int b = 1) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}
double divide(double a, double b) {
    return a / b;
}
int main() {
    int num1 = 20;
    int num2 = 5;
    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Subtraction: " << subtract(num1, num2) << endl;
    cout << "Multiplication: " << multiply(num1, num2) << endl;
    cout << "Multiplication with default argument: " << multiply(num1) << endl;
    cout << "Integer division: " << divide(num1, num2) << endl;
    cout << "Decimal division: " << divide(20.0, 3.0) << endl;

    return 0;
}
