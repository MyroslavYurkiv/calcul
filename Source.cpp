#include <iostream>

using namespace std;
int main(int argc, const char) {
    setlocale(0, "");
    double a, b, c, P;  
    char operation;
    cout << "P = "; cin >> P;
    while (P == 1)
    {
        cout << "a = "; cin >> a;
        cout << "Операцiя "; cin >> operation;
        cout << "b = "; cin >> b;

        switch (operation)
        {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '/':
            c = a / b;
            break;
        case '*':
            c = a * b;
            break;

        }
        cout << a << " " << operation << " " << b << " = " << c << endl;
        cout << "P = "; cin >> P;
    }
    while (P == 0)
    {
        return 0;
    }
  }