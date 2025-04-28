#include <iostream>
#include <vector>
using namespace std;

/*
66. Plus One
Easy
Topics
Companies
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.



Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].

*/

/*
my understanding:
we are given an integer array called digits, the digits are ordered from most significant to least significant,
left to right. the large integer doesn't contain leading 0's like 10.
we are supposed to increase the large integer by one and return the entier array of digits.
and the entire array represents as a large integer ,
[1,2,3] they are actually 123. and wee need to ony increment the last ith integer by 1.
*/

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();

    // starting from the ending so that only the last digit incremenets
    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++; // if lesser than 9, the number increments by 1
            return digits;
        }
        digits[i] = 0; // if it is 9 it turns into 0
    }

    digits.insert(digits.begin(), 1); // if it the entire array is [9,9,9] it will be [0,0,0] and there will be 1 inserted in the begininig
    return digits;
}

int main()
{
    vector<int> vec = {9, 9, 9};
    vector<int> res = plusOne(vec);

    for (int num : res)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}