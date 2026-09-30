#include <iostream>
#include <string>
using namespace std;

int main()
{
    string previous = " ";  // previous word is "not a word"
    string current;         // current word
    while (cin >> current){  // read a stream of words
        if (previous == current)
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
    cout << "END!" << endl;
}