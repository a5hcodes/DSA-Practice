#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

/*
500. Keyboard Row
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

Note that the strings are case-insensitive, both lowercased and uppercased of the same letter are treated as if they are at the same row.

In the American keyboard:

the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".



Example 1:

Input: words = ["Hello","Alaska","Dad","Peace"]

Output: ["Alaska","Dad"]

Explanation:

Both "a" and "A" are in the 2nd row of the American keyboard due to case insensitivity.

Example 2:

Input: words = ["omk"]

Output: []

Example 3:

Input: words = ["adsdf","sfd"]

Output: ["adsdf","sfd"]
*/

// given: a string array with some words.
// to find: the words that are letters from the same row of the american keyword qwerty

// Optimal Solution
// Time Complexity : O(n)

vector<string> findWords(vector<string> &words)
{
    // we use hashset to match the letters qucikly
    unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't',
                                'y', 'u', 'i', 'o', 'p'};

    unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g',
                                'h', 'j', 'k', 'l'};

    unordered_set<char> row3 = {'z', 'x', 'c', 'v',
                                'b', 'n', 'm'};

    vector<string> result; // to store the output

    // Start processing each word
    for (string word : words)
    {
        string lower = word; // we copy each word to the var lower // first word: Hello

        for (char &c : lower)
        {
            c = tolower(c); // we convert each word to lowercase from the array in lower // hello
        }

        unordered_set<char> *currRow; // we create an empty pointer that points to the rows where the ltters are present

        if (row1.count(lower[0])) // row1 has the first letter of the string in lower
        {
            currRow = &row1; // we store the address of row1 to currRow pointer // h not present
        }
        else if (row2.count(lower[0]))
        {
            currRow = &row2; // h is present here for hello
        }
        else
        {
            currRow = &row3;
        }

        bool is_valid = true; // we set the bool var to true initially

        for (char c : lower) // we check other letters
        {
            if (currRow->count(c) == 0) // we check if other letters from the word is 0 i.e if there are no valid letters
            {
                is_valid = false; // we return false
                break;            // end the loop
            }
        }
        if (is_valid) // all the letters are from a single row
        {
            result.push_back(word); // we push the word to the vector result and return it!
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