#include<iostream>
using namespace std;

// Question 5:
// Write a C++ program to find the index of a specific element in a 1D array.

int main(){

    system("clear");

    int arr[] = {1,2,3,4,5,6,7,8};
    int item = 7;

     for(int i = 0; i<sizeof(arr)/sizeof(int); i++){
      if(arr[i]==item){
        cout<<i;
        break;
      }
    }
    return 0;
}