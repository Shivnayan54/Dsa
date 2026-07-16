#include<iostream>
using namespace std; 


int lastOccurrence(int arr[], int n, int target) 
{
    int left = 0; 
    int right = n-1 ; 

    int ans = -1;

    while(left <= right)
    {

        int mid = (left + right) /2 ; 

    if(arr[mid] == target)
    {
        ans = mid; 

        left = mid+1; 
    }

    else if(target > arr[mid])
    {
        left = mid+1; 
    }

    else{
        right = mid-1; 
    }

    return ans; 
}
}
int main()
{
    int arr[] = {10,20,20,20,30,40,50}; 

    int n = 7; 

    int target = 20; 
ss
    cout << lastOccurrence(arr, n, target);
}