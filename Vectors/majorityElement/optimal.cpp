#include <iostream>
#include <vector>
#include <algorithm> // for sort
using namespace std;

// Optimal approach to find the majority element
// Time complexity: O(n log n) due to sorting

void optimalMajority(vector<int> vec)
{
    int n = vec.size();

    // Step 1: First we sort the array so that the same elements come together
    sort(vec.begin(), vec.end());

    int count = 1;         // count will track how many times an element appears
    int ans = vec[0];      // start by assuming the first element is the answer

    for (int i = 1; i < n; i++) // i starts from 1 since we are comparing with i-1
    {
        // If current element is equal to previous, we increase count
        if (vec[i] == vec[i - 1])
        {
            count++;
        }
        else
        {
            // If not equal, reset count to 1 for the new element
            count = 1;
            ans = vec[i]; // update ans to current element
        }

        // If count becomes more than n/2, it's the majority
        if (count > n / 2)
        {
            cout << "Majority element: " << vec[i] << endl;
            return; // since we found the answer, we exit
        }
    }

    // If no majority element found
    cout << "No Majority element found" << endl;
}

int main(){
    vector <int> vec = {3, 2, 3, 3, 3};
    int n = vec.size();

    optimalMajority(vec);

}