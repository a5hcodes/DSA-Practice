#include <iostream>
#include <climits>
using namespace std;

/*You are given an array of integers that contains both positive and negative numbers.
 Your task is to find the maximum sum that can be obtained from any contiguous subarray
 (i.e., a group of elements that are next to each other in the array).
*/

// simple words
/* Find the highest possible total you can get by adding numbers from a part of the array,
 without skipping any numbers in between.*/

int main()
{
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;

    int maxSum = 0; // we take the maxSum as 0 or -infinity i.e  INT MIN.

    for (int st = 0; st < n; st++) // starts with index 0
    {
        int currSum = 0;                   // current sum is 0
        for (int end = st; end < n; end++) // starts with end = st which is index 0
        {
            currSum += arr[end];                                    // first if start = 0 [3,-1,4,8,7,14,6  highest sum = 14] and so on we get 15 as the highest sum
            cout << "current sum of subarray: " << currSum << endl; // goes through every possible subarray addition.
            maxSum = max(currSum, maxSum);                          // compare which num is the highest
            // cout << "current of higest subarray sum: " << maxSum << endl;
        } // comes out of the loop ges back to st with now becomig index + 1 EX - prev index = 0 , new index with st++ as 1
        cout << "higest sum out of loop: " << maxSum << endl; // prints the higest sum from index 0 and so on
    }
    cout << "Max sum of subarray: " << maxSum << endl; // prints the higest last sum out of the loop
    return 0;
}