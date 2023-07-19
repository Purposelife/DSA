#include <iostream>
using namespace std;

int isPresent(int arr[][3], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            if (arr[i][j] == target)
                return 1;
        }
    }
    return 0;
}
//printing row wise.
void printsum(int arr[][3], int row, int col)
{
    for (row = 0; row < 3; row++)
    {
        int sum = 0;
        for (col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
}

//col wise

int printsum2(int arr[][3], int row, int col)
{
int max = 0;
int rowIndex = -1;
for (int col = 0; col < 3; col++)


    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][col];
        }
        
       if(max < sum){
        max = sum;
        rowIndex = row;
       }
    }
    return rowIndex;
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // searching in 2-D array.

    cout << " Enter the element to search: ";
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 3))
    {
        cout << "Elemnt found. " << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    // finging row wise sum;
    printsum(arr,3,3);
    cout<<endl;
    cout<<printsum2(arr,3,3);
}