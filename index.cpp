#include<iostream>
using namespace std; 

int main() { 

    int n=7; 
    int arr[n] = {10 ,20 , 20 , 20 ,30 , 40 , 50}; 
    int target = 40; 
    int left = 0; 
    int right = n-1; 
    int ans = 0; 
    int firstOccurrence = 0; 
    
    while(left <= right)
    {
        int mid = left + (right - left) / 2; 

        if(arr[mid] == target && arr[mid] >= target)
        {
            ans = mid; 
            right = mid-1;
        }else{ 
            left = mid+1; 
        }
    }

    cout<<ans ; 
    return 0; 
}