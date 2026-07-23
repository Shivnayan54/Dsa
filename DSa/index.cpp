#include<iostream>
using namespace std; 

int main() { 
 
int n = 6; 

int arr[n] = {1,  3,  6, 5, 4};


int target = 2; 

int left = 0;
int right = n - 1;

while(left <= right) {

    int mid = (left + right) / 2; 

    if(arr[mid] == target){
        cout<<"element found at index: " <<mid ; 
        return 0; 
    }
    else if(target > arr[mid]){
        left = mid+1; 

    }else {
        right = mid -1 ; 
    }

}   

cout<< "Element Not found"; 
return 0; 

}  