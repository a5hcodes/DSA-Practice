#include <iostream>
using namespace std;

void unique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 1, 2, 3, 4, 5, 6};
    int size = 9;

    unique(arr, size); // DONT USE COUT WHEN PRINTING VOID FUNCTION AS IT ALREADY PRINTS IN THE FUNCTION. 
    return 0;
}