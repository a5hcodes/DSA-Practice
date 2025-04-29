#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

/*
217. Contains Duplicate

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

 

Example 1:

Input: nums = [1,2,3,1]

Output: true

Explanation:

The element 1 occurs at the indices 0 and 3.

Example 2:

Input: nums = [1,2,3,4]

Output: false

Explanation:

All elements are distinct.

Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true
*/

// my understanding:
// we are supposed to return true if the array contaisn any duplicate value or twice 
// if no duplicates found, the array returns false.

// Brute Force Approach
// Time Complexity : O(n2)

bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; i++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
        }
    }
    return false;
}

// Optimal Approach using hashtable
/*
A hash table is like a smart list or drawer system where you can store and find things very quickly.

Imagine you have a room full of labeled drawers:

You write down a number (like 42).

A function (called a hash function) tells you which drawer to put it in.

Later, you want to check if 42 is already there. You use the same hash function to go straight to the drawer and check!

So a hash table is:

A data structure that stores key-value pairs.

Uses a hash function to decide where to store values.

Gives very fast access — average case O(1) time for insertion, search, and deletion.
*/

// Time Complexity: O(n)

bool containsDuplicate(vector<int> &nums) {
    unordered_set<int> hashtab;

    for(int num : nums){
        if (hashtab.count(num))
        {
            return true;
        }
        hashtab.insert(num);
    }
    return false;

}


int main()
{
    vector<int> vec = {1, 2, 3, 1};

    bool res = containsDuplicate(vec);

    if (res)
        cout << "Contains Duplicate" << endl;
    else
        cout << "No Duplicate" << endl;

    return 0;
}