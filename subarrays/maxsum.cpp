#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;

    int maxSum = 0;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end]; // first if start = 0 [3,-1,4,8,7,14,6  highest sum = 14] and so on we get 15 as the highest sum
            cout << "current sum of subarray: " << currSum << endl;  // goes through every possible subarray addition.
            maxSum = max(currSum, maxSum); //compare which num is the highest 
            // cout << "current of higest subarray sum: " << maxSum << endl; 
        }
        cout << "higest sum out of loop: " << maxSum << endl; 
    }
    cout << "Max sum of subarray: " << maxSum << endl;
    return 0;
}