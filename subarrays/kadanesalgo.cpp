#include <iostream>
#include <climits>
using namespace std;

//LEETCODE : 53. Maximum Subarray

// Kadane's Algorithm:
// Used to find the maximum sum of a contiguous subarray in an array.
// It works by maintaining a running sum (currentSum) and resetting it to 0 if it becomes negative.
// The maximum value of currentSum seen during the process is the result (maxSum).

int main()
{
    // Input array
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;

    // Initialize maxSum to the smallest possible integer
    int maxSum = INT_MIN;

    // Variable to store the current subarray sum
    int currSum = 0;

    // Loop through each element in the array
    for (int i = 0; i < n; i++)
    {
        // Add current element to current subarray sum
        currSum += arr[i];

        // Example: Second Iteration (i = 1), arr[i] = -4
        // currSum from previous iteration = 3
        // currSum = 3 + (-4) = -1
        // maxSum = max(3, -1) → maxSum remains 3
        // Since currSum is now negative (-1), we reset currSum to 0
        // Why? Because adding negative numbers will only reduce future sums

        // (Extra) Print current sum after addition
        cout << "Current SUM at index " << i << ": " << currSum << endl;

        // Update maxSum if current subarray sum is greater
        maxSum = max(currSum, maxSum); // maxsum consists the positive numbers eg from the first 2 iteration

        // (Extra) Print max sum so far
        cout << "MAX SUM so far at index " << i << ": " << maxSum << endl;

        // If current sum becomes negative, reset it to 0
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    // Print the final result: maximum subarray sum
    cout << "FINAL MAX SUM: " << maxSum << endl;
}
