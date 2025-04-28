#include <iostream>
#include <vector>
using namespace std;

/*
35. Search Insert Position
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1

*/

/*
my understanding:
there is a sorted array and target given and we are supposed to find the target in that array,
we are supposed to return the index of target value. if not found we have to determine the index of
the inserted value.
*/

// Brute Force Approach
// Time Complexity : O(n)

// int searchInsert(vector<int> &nums, int target)
// {
//     int n = nums.size();

//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] >= target)
//         {
//             return i;
//         }
//     }
//     return n;
// }

// Binary Search Approach
// Time Complexity : O(log n)

int searchInsert(vector<int> &nums, int target)
{
    int n = nums.size();

    int i = 0, j = n - 1;

    while (i <= j)
    {
        int mid = i + (j - i) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return i;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;

    int res = searchInsert(vec, target);

    cout << "Indices: " << res << endl;

    return 0;
}