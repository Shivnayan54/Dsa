#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int left = 0;
    int right = n - 1;

    while(left < right) {
        
        if(arr[left] != arr[right]) {
            cout << "Not a palindrome";
            return 0;   
        }

        left++; 
        right--;
    }

    cout << "Palindrome";
}