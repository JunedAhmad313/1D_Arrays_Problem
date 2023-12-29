#include <iostream>
using namespace std;

void reverse(int arr[], int num)
{
    int start = 0;
    int end = num;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main()
{

    system("clear");

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num = sizeof(arr) / sizeof(arr[0]) - 1;

    reverse(arr, num);

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}