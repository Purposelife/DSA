#include <iostream>
using namespace std;

int binary(int *arr, int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    if (start > end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            binary(arr, start, mid - 1, key);   
        }
        else
        {
            binary(arr, mid + 1, end, key);
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 7, 9, 34, 67, 87};
    cout << binary(arr, 0, 10, 33);
}