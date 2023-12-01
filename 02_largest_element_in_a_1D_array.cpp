#include <iostream>
using namespace std;

// Question 2:
// Write a C++ program to find the largest  & smallest element in a 1D array.

int main()
{
    system("clear");

    int i, min, max, size = 10;

    int arr[10] = {32, 65, 89, 31, 54, 66, 77, 44, 43, 99};
    max = arr[0];
    min = arr[0];

    for (int i = 1; i < size; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << " Smallest Number in Array is  " << min << endl;
    cout << " Greatest Number in Array is  " << max;
    return 0;
}