#include <iostream>
#include <climits>
using namespace std;

// You're already finding the maximum sum. Now try to print the actual subarray that gives that max sum.

/*Input:
arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4}
Output:
Maximum sum: 6
Subarray: [4, -1, 2, 1]
*/

int main()
{
    int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;
    int start, end, tempStart = 0;

    int currSum = 0, maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        // maxSum = max(currSum, maxSum);

        if (currSum > maxSum)
        {
            maxSum = currSum; // currSum becomes maxSum 
            start = tempStart; //0
            end = i; // end stores the index value 
        }

        if (currSum < 0)
        {
            currSum = 0; // resets to 0 as kandanes logic
            tempStart = i + 1; //index incraess to 1 if currSum is greater than 0 
        }
    }
    cout << "final sum: " << maxSum << endl;
    cout << "subarray : " << endl;
    for (int i = start; i <= end; i++) // loops through the start and end to print the subarray
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
