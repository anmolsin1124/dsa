#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int start, int end)
{
    int pivot = arr[end]; // choose last element as pivot
    int i = start - 1;    // pointer for smaller element

    for (int j = start; j < end; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // place pivot at its correct position
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

// Quick Sort function (recursive)
void quickSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int pivotIndex = partition(arr, start, end);

    quickSort(arr, start, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, end);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1,8,6,4,0,99,87,65};
    int n = 12;

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
