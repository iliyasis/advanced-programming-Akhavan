#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<int> my_vector;
    // my_vector[0] = 10; => Error, why?!
    my_vector.push_back(10);
    my_vector[0] = 12;

    vector<double> v(4);
    v[0] = 1.5; v[1] = 3.7;
    v[2] = 9.2; v[3] = 41;

    vector<string> names(3);
    names[0] = "Ali";
    names[1] = "Reza";
    names[2] = "Hasan";

    vector<double> vd(50, 3.2);
    // vd[50] = 2.6; => Error, Why?!
}