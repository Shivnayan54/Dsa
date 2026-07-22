#include<iostream>
using namespace std; 

int main() { 
 
int n = 6; 

int arr[n] = {1, 2, 3,  6, 5, 4};


int target = 4; 

for(int i = 0; i < n; i++) {

    int left= 0; 
    int right = n-1; 

    int mid = (left + right) / 2; 

    if(arr[i] == target) {
        cout << "Element found at index: " << i << endl;
        return 0; 
    } else if(target > arr[mid]) {
        left = mid + 1; 
    } else {
        right = mid - 1; 
    }

}

return 0; 

}