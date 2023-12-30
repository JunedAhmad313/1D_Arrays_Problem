#include <iostream>
using namespace std;

// Question 7:
// Write a C++ program to find the second-largest element in a 1D array.

int main()
{
    system("clear");

    int size = 10;
    int arr[10] = {65, 32, 44, 59, 43, 33, 21, 44, 35, 9};
    int maxElement = 0;
    int secondMax = 0;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] > maxElement)
        {
            secondMax = maxElement;
            maxElement = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != maxElement)
        {
            secondMax = arr[i];
        }
    }
    cout << "Second Max Element is " << secondMax;
    return 0;
}