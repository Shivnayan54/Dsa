#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int target) {

    int left = 0;
    int right = n - 1;
    int ans = -1;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(arr[mid] == target) {
            ans = mid;
            right = mid - 1;
        }
        else if(arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return ans;
}

int lastOccurrence(int arr[], int n, int target) {

    int left = 0;
    int right = n - 1;
    int ans = -1;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(arr[mid] == target) {
            ans = mid;
            left = mid + 1;
        }
        else if(arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return ans;
}

int main() {

    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 2;

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    if(first == -1) {
        cout << "Count = 0";
    }
    else {
        cout << "Count = " << last - first + 1;
    }

    return 0;
}