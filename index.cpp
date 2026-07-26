#include<iostream>
using namespace std;

// First Occurrence
int firstOccurrence(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    int ans = -1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target)
        {
            ans = mid;
            right = mid - 1;     // Search on left
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return ans;
}

// Last Occurrence
int lastOccurrence(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    int ans = -1;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] == target)
        {
            ans = mid;
            left = mid + 1;      // Search on right
        }
        else if(arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return ans;
}

// Lower Bound
int lowerBound(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    int ans = n;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] >= target)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

// Upper Bound
int upperBound(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;
    int ans = n;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(arr[mid] > target)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int arr[] = {10, 20, 20, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 20;

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    cout << "First Occurrence : " << first << endl;
    cout << "Last Occurrence  : " << last << endl;

    if(first != -1)
        cout << "Count Occurrence : " << last - first + 1 << endl;
    else
        cout << "Count Occurrence : 0" << endl;

    cout << "Lower Bound      : " << lowerBound(arr, n, target) << endl;
    cout << "Upper Bound      : " << upperBound(arr, n, target) << endl;

    return 0;
}