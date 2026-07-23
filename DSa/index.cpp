#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int left = 0;
    int right = n - 1;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(arr[mid] == target) {
            cout << "Target found at index: " << mid << endl;
            return 0;
        }

        else if(target > arr[mid]) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }
    }

    // If target is not found
    cout << "Insert Position: " << left << endl;

    return 0;
}