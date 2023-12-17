#include <iostream>
using namespace std;


// Question 3:
// Write a C++ program to calculate the average of elements in a 1D array.

int main()
{
    system("clear");
    const int size = 10;
    int arr[size] = {1, 2, 3, 99, 54, 32, 13, 65, 32, 7};
    int sum = 0;
    double avg;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    avg = static_cast<double>(sum) / size;

    cout << avg << " ";
    return 0;
}
