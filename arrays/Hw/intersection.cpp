// waf to print intersection of 2 arrays
#include <iostream>
using namespace std;

// printing values 
void intersection(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

// storing on arr3 
int arr3[100];
int k = 0;  // k is the initial index at which the value is stored. k is the index of arr3

void inter(int arr1[], int arr2[], int size1, int size2){
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i]== arr2[j])
            {
                arr3[k] = arr1[i]; // store the match in arr3
                k++; // move to next spot in arr3
                break;  // stop inner loop, move to next i
            }
            
        }
        
    }
    cout << "Intersection of arrays stored in arr3" << endl;
    for(int i=0; i<k; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int arr1[] = {10,20,30,40,50};
    int size1 = 5;

    int arr2[] = {50,20,30,80,60};
    int size2 = 5;

    intersection(arr1, arr2, size1, size2);
    inter(arr1, arr2, size1, size2);

    return 0;
}