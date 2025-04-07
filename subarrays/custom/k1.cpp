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
            maxSum = currSum;
            start = tempStart;
            end = i;
        }

        if (currSum < 0)
        {
            currSum = 0;
            tempStart = i + 1;
        }
    }
    cout << "final sum: " << maxSum << endl;
    cout << "subarray : " << endl;
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
