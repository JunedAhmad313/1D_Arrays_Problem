#include <iostream>
using namespace std;

// Question 1:
// Write a C++ program to find the sum of elements in a 1D array.



int main()
{
    system("clear");
    const int size = 10;
    int arr[size] = {1, 2, 9, 8, 7, 6, 5, 4, 3, 6};
    int sum = 0;

    for (int i = 0; i < size; i++)
    {

        sum = sum + arr[i];
    }
    cout << sum<< " ";
    return 0;
}