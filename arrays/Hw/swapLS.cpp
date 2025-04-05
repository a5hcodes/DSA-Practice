#include <iostream>
using namespace std;

void swapLS(int arr[], int size)
{
    int maxVal = 0;
    int minVal = 0;
    int maxIndex = arr[0];
    int minIndex = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            minIndex = i;
        }
    }
    swap(arr[maxIndex], arr[minIndex]);
}

int main()
{

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    cout << "og array" << endl;
    cout << arr << endl;

    swapLS(arr, size);

    cout << "swapped array" << endl;
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}