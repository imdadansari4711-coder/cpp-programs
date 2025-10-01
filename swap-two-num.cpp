#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number; " << endl;
    cin >> b;
    cout << "Before Swaping" << endl;
    cout << "A: " << a << ", B: " << b << endl;
    int temp = a;
    b = a;
    a = temp;
    cout << "After Swaping" << endl;
    cout << "A: " << a << ", B: " << b << endl;
    return 0;
}