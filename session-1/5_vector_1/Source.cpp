#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double> ages;
    double age;
    while (cin >> age)
        ages.push_back(age);

    double sum = 0;
    for (int i = 0; i < ages.size(); ++i)
        sum += ages[i];

    cout << "Average is: " << sum/ages.size() << endl;
    sort(ages.begin(), ages.end());
    cout << "The youngest one has " << ages[0] << " years old" << endl;
    cout << "The oldest one has " << ages[ages.size()-1] << " years old" << endl;
    cout << "Median is: " << ages[ages.size()/2] << endl;
}