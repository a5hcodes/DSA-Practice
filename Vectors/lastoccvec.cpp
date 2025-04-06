#include <iostream>
#include <vector>
using namespace std;

// Write a code for finding the last occurences of an element x in a given array. Take input from user.

int main()
{
    vector<int> vec(6);
    cout << "Enter vector: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> vec[i];
    }
    cout << "Enter x: " << endl;
    int x;
    cin >> x;
    int occurences = -1;
    for (int i=vec.size()-1; i>=0; i--)
    {
        if (vec[i] == x)
        {
            occurences = i;
            break;
        }
    }
    cout << occurences << endl;
}