//Shivam Singh (2503201001090)
#include <iostream>
using namespace std;
void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call by Value : " << x << endl;
}
void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside Call by Address : " << *x << endl;
}
void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call by Reference : " << x << endl;
}
int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "\nOriginal Value = " << a << endl;
    callByValue(a);
    cout << "After Call by Value = " << a << endl;
    callByAddress(&a);
    cout << "After Call by Address = " << a << endl;
    callByReference(a);
    cout << "After Call by Reference = " << a << endl;
    return 0;
}