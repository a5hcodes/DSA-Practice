#include <iostream>
#include <vector>
using namespace std;

// Brute Force Majority Element:
// For each element, count how many times it appears in the array.
// If any element appears more than n/2 times, it's the majority.
// Time Complexity: O(n^2), Space: O(1)

void bruteMajority(vector<int> num)
{
    int n = num.size();
    for (int i = 0; i < n; i++) // go through the loop 
    {
        int count = 0; // set as 0 
        for (int j = 0; j < n; j++) // go through the loop 
        {
            if (num[i] == num[j]) // if the values equal are found
            {
                count++; // the count of same elements go up
            }
        }
        if (count > n / 2) // if count is greater than the floor of n/2 EX in the case 2 is floor and count is 3
        {
            cout << "Majority Element is: " << num[i] << endl; // print the number that is the majority element
            return; // stop after finding the first majority element 
        }
    }
    cout << "No Majority Element Found" << endl;  // if no conditions matched return this.
}

int main()
{
    vector<int> vec = {3, 2, 3, 3, 3};
    int size = vec.size();

    bruteMajority(vec);
}