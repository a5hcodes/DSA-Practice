#include <iostream>
using namespace std;

void bigNum(int arr[], int size)
{

    int big = arr[0]; // starting with the first index. 

    for (int i = 0; i < size; i++) //looping through
    {
        if (arr[i] > big)  // if the current value is greater than index of 0 
        {
            big = arr[i]; // big becomes the current value 
        }
    }
    cout << big << endl;
}

int main()
{
    int arr[] = {1, 5, 3, 9, 2};
    int size = 5;

    bigNum(arr, size);
}