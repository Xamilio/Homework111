#include <iostream>
#include <algorithm>
using namespace std;

int maxValue(int a, int b)
{
    return (a > b) ? a : b;
}

int maxValue(int a, int b, int c) 
{
    return max({ a, b, c });
}

int maxValue(int arr[], int size) 
{
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int maxValue(int arr[][3], int rows, int cols) 
{
    int maxVal = arr[0][0];
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (arr[i][j] > maxVal) 
            {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

int maxValue(int arr[][3][3], int d1, int d2, int d3)
{
    int maxVal = arr[0][0][0];
    for (int i = 0; i < d1; i++) 
    {
        for (int j = 0; j < d2; j++) 
        {
            for (int k = 0; k < d3; k++)
            {
                if (arr[i][j][k] > maxVal) 
                {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    return maxVal;
}

int main() 
{
    int a = 5, b = 10, c = 8;
    cout << "Max of two: " << maxValue(a, b) << endl;
    cout << "Max of three: " << maxValue(a, b, c) << endl;

    int arr1D[] = { 1, 4, 7, 2, 9 };
    cout << "Max in 1D array: " << maxValue(arr1D, 5) << endl;

    int arr2D[2][3] = { {3, 8, 5}, {7, 2, 9} };
    cout << "Max in 2D array: " << maxValue(arr2D, 2, 3) << endl;

    int arr3D[2][3][3] = { {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
                           {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}} };
    cout << "Max in 3D array: " << maxValue(arr3D, 2, 3, 3) << endl;
}
