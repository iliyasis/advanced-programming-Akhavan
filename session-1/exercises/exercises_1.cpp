#include <iostream>
#include <string>
using namespace std;

int main()
{
    int counter;
    string previous = " ";  // previous word is "not a word"
    string current;         // current word
    while (cin >> current){  // read a stream of words
        if (previous == current)
        {
            cout << "repeated word: " << current << '\n';
            counter++;
        }
        previous = current;
    }
    cout << "END!" << endl;
    cout << "num: " << counter;
}

// #include <iostream>
// #include <string>
// #include <map>
// using namespace std;

// int main()
// {
//     map<string, int> repeated_words;
//     string previous = " ";  // previous word is "not a word"
//     string current;         // current word
//     while (cin >> current){  // read a stream of words
//         if (previous == current)
//         {
//             cout << "repeated word: " << current << '\n';
//             repeated_words[current]++;
//         } 
//         previous = current;
//     }
//     cout << "END!" << endl;

//     for(auto word: repeated_words)
//     {
//             cout << word.first << " : " << word.second << endl;
//     }
// }