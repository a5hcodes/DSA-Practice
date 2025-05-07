#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

vector<string> findWords(vector<string> &words)
{
    unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't',
                                'y', 'u', 'i', 'o', 'p'};

    unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g',
                                'h', 'j', 'k', 'l'};

    unordered_set<char> row3 = {'z', 'x', 'c', 'v',
                                'b', 'n', 'm'};

    vector<string> result;

    for (string word : words)
    {
        string lower = word;

        for (char &c : lower)
        {
            c = tolower(c);
        }

        unordered_set<char> *currRow;

        if (row1.count(lower[0]))
        {
            currRow = &row1;
        }
        else if (row2.count(lower[0]))
        {
            currRow = &row2;
        }
        else
        {
            currRow = &row3;
        }

        bool is_valid = true;

        for (char c : lower)
        {
            if (currRow->count(c) == 0)
            {
                is_valid = false;
                break;
            }
        }
        if (is_valid)
        {
            result.push_back(word);
        }
    }
    return result;
}

int main()
{
    vector<string> vec = {"Hello", "Alaska", "Dad", "Peace"};

    vector<string> res = findWords(vec);

    for (string sing : res)
    {
        cout << sing << " ";
    }
    cout << endl;
    return 0;
}