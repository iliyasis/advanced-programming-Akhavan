#include <iostream>
using namespace std;

void f(int x, int& y)
{
    x = 5;
    y = 10;
}

int main()
{
    int a = 1;
    int b = 2;
    f(a, b);
    cout << a << endl;  // همچنان 1
    cout << b << endl;  // تبدیل به 10
    return 0;
}