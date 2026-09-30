#include <iostream>
using namespace std;

void sum_with_five(int x)
{
    x += 5;
}

int main()
{
    int a = 20;
    sum_with_five(a);
    cout << a << endl;  // همچنان 20
    return 0;
}