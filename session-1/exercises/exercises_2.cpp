#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int maxx = -1;
    while (cin >> word)
    {
        if(word.length() > maxx)
        {
            maxx = word.length();
        }
    }
    
}