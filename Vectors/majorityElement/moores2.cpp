#include <iostream>
#include <vector>
using namespace std;

// Moore's Voting Algorithm
// It finds the majority element in O(n) time and O(1) space without using maps or sorting.
// Majority = element appearing more than n/2 times
// Time complexity: O(n).
// Use when working with large arrays for find majority.

vector<int> mooresMajority(vector<int> &num)
{
    int n = num.size();
    int count1 = 0, count2 = 0;
    int candidate1 = -1, candidate2 = -1;

    // First pass: find possible candidates
    for (int val : num)
    {
        if (val == candidate1)
        {
            count1++;
        }
        else if (val == candidate2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            candidate1 = val;
            count1 = 1;
        }
        else if (count2 == 0)
        {
            candidate2 = val;
            count2 = 1;
        }
        else
        {
            count1--;
            count2--;
        }
    }

    // Second pass: verify the candidates
    count1 = count2 = 0;
    for (int val : num)
    {
        if (val == candidate1)
            count1++;
        else if (val == candidate2)
            count2++;
    }

    vector<int> result;
    if (count1 > n / 3)
        result.push_back(candidate1);
    if (count2 > n / 3)
        result.push_back(candidate2);

    return result;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4};
    vector<int> res = mooresMajority(vec);

    cout << "Majority elements (more than n/3 times): ";

    for (int val : res)
    {
        cout << val << " ";
    }
    cout << endl;
}