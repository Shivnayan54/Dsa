#include<iostream>
using namespace std;

int main() {

    int n = 5; 

    int arr[n] = {10 , 20 , 30 , 40 , 50}; 

    int left = 0; 
    int right = n-1; 

    while( left < right) {

        swap(arr[left], arr[right]); 

        left++; 
        right--; 

    }

    cout<<"Reversed Array: ";

    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " "; 
    }

    return 0; 

}