#include <iostream>
using namespace std;

// Question 4:
// Write a C++ program to count the number of even elements in a 1D array.

int main()
{

    system("clear");

    int size = 10;
    int arr[10] = {1, 34, 54, 65, 76, 88, 43, 90, 49, 32};
    int counter = 0;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 2 == 0)
        {
            cout<< arr[i]<<" ";
            counter++;
        }
    }
    cout << " Even Numbers In Array " << counter;
    return 0;
}