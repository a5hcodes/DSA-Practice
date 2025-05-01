#include <iostream>
#include <vector>
using namespace std;

/*

283. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.


Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]


Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1


Follow up: Could you minimize the total number of operations done?

my understanding:
we are supposed to move all the zeroes to the end while maintaining
he inital order and we should only modify the existing array and not
creating a new array or extra space.

*/

// Brute Force Approach
// Time Complexity : O(n)
// Space Complexity : O(n) not in-place

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    vector<int> arr; // we initialize an empty vector for storing the non zero elements.

    // first for loop for pushing the non zero numbers to arr
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            arr.push_back(nums[i]);
        }
    }
    // second for loop for copying arr[1,3,12] to nums[0,1,0,3,12]
    for (int j = 0; j < n; j++)
    {
        nums[j] = arr[j]; // nums[]
    }

    for (int z = arr.size(); z < n; z++)
    {
        nums[z] = 0;
    }
}

// Optimal Solution using Two pointers
// Time Complexity : O(n)
// Space Complexity : O(1) in-place

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int lastIndex = 0; // this is the index kept zero initalilly if a non zero element is found it then swapped 

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0) // if non zero found
        {
            swap(nums[i], nums[lastIndex]); // swap current val with the last index 
            lastIndex++; //when swapped it is then moved further by 1 the index becomes i + 1
        }
    }
}

int main()
{
    vector<int> vec = {0, 1, 0, 3, 12};

    moveZeroes(vec);
    cout << "[ ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << " ]";

    cout << endl;

    return 0;
}