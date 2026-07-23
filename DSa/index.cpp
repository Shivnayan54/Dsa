#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 2;

    int left = 0;
    int right = n - 1;

    int ans = -1;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(arr[mid] == target) {
            ans = mid;
            left = mid + 1;      // Search on the right
        }

        else if(arr[mid] < target) {
            left = mid + 1;
        }

        else {
            right = mid - 1;
        }

    }

    if(ans != -1)
        cout << "Last Occurrence is at index: " << ans;
    else
        cout << "Element not found";

    return 0;
}