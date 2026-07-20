#include<iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 20, 30, 20};

    int maxi = arr[0];

    for (int i = 1; i < 5; i++) {

        if (arr[i] > maxi) {
            maxi = arr[i];
        }

    }

    cout << "The maximum element in the array is : " << maxi << endl;

    return 0;
}