//Sort the array of integers of size N that contains only 0's 1's and 2's in single scan

#include <iostream>
using namespace std;

void sort012(int *arr, int n)
{
    int low = 0;
    int mid = 0;
    int end = n - 1;

    while (mid <= end)
    {

        if (arr[mid] == 0)
        {

            swap(arr[low], arr[mid]);

            low++;

            mid++;
        }

        else if (arr[mid] == 1)
        {

            mid++;
        }

        else if (arr[mid] == 2)
        {

            swap(arr[end], arr[mid]);

            end--;
        }
    }
}