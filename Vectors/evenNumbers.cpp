#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

/*
1295. Find Numbers with Even Number of Digits

Given an array nums of integers, return how many of them contain an even number of digits.
Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation:
12 contains 2 digits (even number of digits).
345 contains 3 digits (odd number of digits).
2 contains 1 digit (odd number of digits).
6 contains 1 digit (odd number of digits).
7896 contains 4 digits (even number of digits).
Therefore only 12 and 7896 contain an even number of digits.
Example 2:

Input: nums = [555,901,482,1771]
Output: 1
Explanation:
Only 1771 contains an even number of digits.


Constraints:

1 <= nums.length <= 500
1 <= nums[i] <= 105
*/

// my understanding :
// we are supposed to return the count of even size of numbers from an array
// if the size of an element is even we return the count of the total even numer size of the array.

// Brute Force Approach
//  Time Complexity = O(n)

int findNumbers(vector<int> &nums)
{

    int n = nums.size();
    int count = 0;

    for (int val : nums)
    {
        int digits = 0;

        while (val > 0)
        {
            val = val / 10;
            digits++;
        }

        if (digits % 2 == 0)
        {
            count++;
        }
    }
    return count;
}

// Optimal Approach 1 using logarithm of 10
// Time Complexity : O(n)
int findNumbers(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;

    for (int val : nums)
    {
        int digits = (int)log10(val) + 1;

        if (digits % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
// Optimal Approach 2 using string
// Time Complexity : O(n)

int findNumbers(vector<int> &nums)
{
    int count =0;
    for (int val : nums)
    {
        string s = to_string(val);

        if (s.length() % 2 == 0)
            count++;
    }
    return count;
}

int main()
{
    vector<int> vec = {12, 345, 7, 11, 7891};

    cout << "Even Numbers: " << findNumbers(vec) << endl;
}
