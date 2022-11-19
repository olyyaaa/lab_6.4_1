// lab_6.4_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int product(int arr[], int n)
{
    int product = 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            product *= arr[i];
        }
    }

    return product;
}

int sum(int arr[], int n)
{
    int sum = 0;

    int firstZeroIndex = 0;

    while (arr[firstZeroIndex] != 0)
    {
        firstZeroIndex++;
    }

    int lastZeroIndex = n -1;

    while (arr[lastZeroIndex] != 0)
    {
        lastZeroIndex--;
    }

    for (int i = firstZeroIndex; i < lastZeroIndex; i++)
    {
        sum += arr[i];
    }

    return sum;
}

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}


// Driver code
int main()
{
    int n, x;
    cout << "Enter the number of items:" << "\n";
    cin >> n;
    int* arr = new int(n);
    cout << "Enter " << n << " items" << endl;

    for (x = 0; x < n; x++) {
        cin >> arr[x];
    }

    cout << "Product of given array is " << product(arr, n) << endl;
    cout << "Sum of given array is " << sum(arr, n) << endl;
    rearrange(arr, n);
    printArray(arr, n);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

	
