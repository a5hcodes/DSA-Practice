#include <iostream>
#include <vector>
using namespace std;

// Brute Force Majority Element:
// For each element, count how many times it appears in the array.
// If any element appears more than n/3 times, it's the majority.
// Time Complexity: O(n^2), Space: O(1)

void bruteMajority(vector<int>& vec)
{
    int n = vec.size(); // n = 4, so n/3 = 1

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        // Dry run example: vec = {3, 2, 3, 3}
        // Outer loop i = 0 → vec[i] = 3
        for (int j = 0; j < n; j++)
        {
            // Compare vec[i] with every vec[j]
            // i=0, j=0 → vec[0] == vec[0] → 3 == 3 → count = 1
            // i=0, j=1 → vec[0] == vec[1] → 3 == 2 → no count
            // i=0, j=2 → vec[0] == vec[2] → 3 == 3 → count = 2 → count > n/3 → print 3 & return

            if (vec[i] == vec[j])
            {
                count++;
            }

            if (count > n / 3)
            {
                cout << "Majority Element 2 is: " << vec[i] << endl;
                return;
            }
        }

        // This early return means we only get the first majority element found.
    }
}

int main()
{
    vector<int> vec = {3, 2, 3, 3};
    int size = vec.size();

    bruteMajority(vec);
    // Output: Majority Element 2 is: 3
}
