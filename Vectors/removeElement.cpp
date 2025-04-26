#include <iostream>
#include <vector>
using namespace std;

/*
27. Remove Element

Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.

Example 1:

Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).

*/

/*
my understanding.
We are given an array and a value. We need to remove all occurrences of that value in-place
(without using extra space). We return the count k, which is the number of elements not equal to the value.
The first k elements of the modified array should contain these valid elements.
The order doesn’t matter, and the rest of the array beyond k can be anything.
*/

// Brute Force Approach
//  Time Complexity : O(n2)

vector<int> removeElement(vector<int> &nums, int val)
{
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin() + i);
            i--; // adjust i because array has shifted left
        }
    }
    return n; // remaining valid elements
}


// Two Pointer Approach 
// Time Complexity : O(n)

vector<int> removeElement(vector<int> &nums, int val)
{
    int n = nums.size();
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++
        }
    }
    return k; // remaining valid elements
}


