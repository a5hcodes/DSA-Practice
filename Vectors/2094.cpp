#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
2094. Finding 3-Digit Even Numbers

You are given an integer array digits, where each element is a digit. The array may contain duplicates.

You need to find all the unique integers that follow the given requirements:

The integer consists of the concatenation of three elements from digits in any arbitrary order.
The integer does not have leading zeros.
The integer is even.
For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

Return a sorted array of the unique integers.


Example 1:

Input: digits = [2,1,3,0]
Output: [102,120,130,132,210,230,302,310,312,320]
Explanation: All the possible integers that follow the requirements are in the output array.
Notice that there are no odd integers or integers with leading zeros.
Example 2:

Input: digits = [2,2,8,8,2]
Output: [222,228,282,288,822,828,882]
Explanation: The same digit can be used as many times as it appears in digits.
In this example, the digit 8 is used twice each time in 288, 828, and 882.
Example 3:

Input: digits = [3,7,5]
Output: []
Explanation: No even integers can be formed using the given digits.


Constraints:

3 <= digits.length <= 100
0 <= digits[i] <= 9
*/

// given : an array called digits.
// to return : a sorted array of unique integers consists of concatenation of 3 elements from digits in any order.
// conditions: the firt number of the combination of digits should not start with 0, all sorted array should be even.

//Brute Force Approach 
// Time Complexity : O(n³ + k log k) 

vector<int> findEvenNumbers(vector<int> &digits)
{
    int n = digits.size();

    unordered_set<int> res; // to avoid duplicates and enhance insertion

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i != j && j != k && i != k)
                {
                    int d1 = digits[i];
                    int d2 = digits[j];
                    int d3 = digits[k];

                    int num = d1 * 100 + d2 * 10 + d3 * 1;

                    if (d1 != 0 && num % 2 == 0)
                    {
                        res.insert(num);
                    }
                }
            }
        }
    }
    vector<int> result(res.begin(), res.end());
    sort(result.begin(), result.end());

    return result;
}

int main()
{
    vector<int> vec = {2, 1, 3, 0};
    vector<int> res = findEvenNumbers(vec);

    cout << "3-Digit Even Numbers: " << " ";
    for (int num : res)
    {
        cout << num << " ";
    }
    cout << endl;
}