#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int maxx = -1;
    string big_word = "";

    while (cin >> word)
    {
        if(int(word.size()) > maxx)
        {
            maxx = word.size();
            big_word = word;
        }
    }
    cout << big_word << ": " << maxx << endl;
}