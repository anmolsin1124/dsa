#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted halves
void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp;
    int left = start;
    int right = mid + 1;

    // Merge both halves
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements of left half
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements of right half
    while (right <= end)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy temp back to original array
    for (int i = 0; i < temp.size(); i++)
    {
        arr[start + i] = temp[i];
    }
}

// Recursive merge sort
void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    mergeSort(arr, start, mid);   // left half
    mergeSort(arr, mid + 1, end); // right half
    merge(arr, start, mid, end);  // merge halves
}

int main()
{
    int arr[] = {1, 3, 5, 7, 2, 4, 6, 8};
    int n = 8;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
