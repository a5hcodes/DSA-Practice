#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
268. Missing Number

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.


Example 1:

Input: nums = [3,0,1]

Output: 2

Explanation:

n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:

Input: nums = [0,1]

Output: 2

Explanation:

n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

Example 3:

Input: nums = [9,6,4,2,3,5,7,0,1]

Output: 8

Explanation:

n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
*/

/*
we are supposed to return the missing number from the range given.
*/

// int missingNumber(vector<int> &nums)
// {
//     int n = nums.size();

//     sort(nums.begin(), nums.end()); // sort the array

//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] != i) // compare nums with index number after sorting
//         {
//             return i; // return the index that is not
//         }
//     }
//     return n; // else return the size of the array with the elements
// }

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    unordered_set<int> seen; // create a hash set to store all elements

    cout << "Inserting into set:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Inserting: " << nums[i] << endl;
        seen.insert(nums[i]); // insert each number from the array into the hash set
    }

    cout << "\nChecking for missing number:\n";
    for (int i = 0; i <= n; i++)
    {
        cout << "Checking: " << i << endl;
        if (seen.find(i) == seen.end()) // if the number is not found in the set
        {
            cout << "Missing number found: " << i << endl;
            return i; // that is the missing number
        }
    }

    cout << "All numbers found, returning n = " << n << endl;
    return n; // else return the size of the array with the elements
}


int main()
{
    vector<int> vec = {7, 9, 10};

    cout << "Missing Number: " << missingNumber(vec) << endl;

    return 0;
}