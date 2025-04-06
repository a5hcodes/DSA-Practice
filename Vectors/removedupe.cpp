#include <iostream>
#include <vector>
using namespace std;

// LEETCODE 26 - BEGINNERS

/* Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
Custom Judge:

The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
If all assertions pass, then your solution will be accepted.*/

// MY UNDERSTANDING

/* there is a sorted array given where numbers are duplicating,
 we have to place the unique values in the fronte in a single
 array without using another ary to store. remove the duplicate
 values and make sure the unique values are in order.
 then return k - k gives the total count of
 how many unqiue values are there in the array.
 your arrays k elements are unique values and then
 other elements are duplicates or anything. */

/*
If array is empty:
   return 0

Initialize i = 0  // This will track position of last unique element

Loop j from 1 to end of array:
   If nums[j] != nums[i]:  // We found a new unique number
       i = i + 1           // Move i ahead to place next unique
       nums[i] = nums[j]   // Copy new unique number to front

Return i + 1  // Total count of unique elements

*/

int removeDuplicates(vector<int> &num)
{
    if (num.size() == 0)
    {
        return 0;
    } // check if there is any elements in the array or not.

    int i = 0; // index is 0 first

    // to iterate the array
    for (int j = 1; j < num.size(); j++)
    {
        // if the value of index j and i are not equal then
        if (num[j] != num[i])
        {
            i++;             // i will be 1 from 0+1 and so on..
            num[i] = num[j]; // the last index will be stored in i
        }
    }
    return i + 1; // bc we need to return the total number of values given in the question.
}

int main()
{

    vector<int> vec = {1, 1, 2, 2, 3, 3, 4, 5, 6, 6};

    int k = removeDuplicates(vec);

    cout << "Unique array: " << k << endl;
    cout << "Updates array: ";
    for (int i = 0; i < k; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}