#include<iostream>
using namespace std; 

int main() 
{

    int arr[10] = {1 , 3, 4 , 5}; 
    
    int n = 4; 

    int target = 2; 
    int pos = 1; 

    for(int i = n; i>pos ; i--)
    {
       arr[i] = arr[i-1]; 
    }
    
    arr[pos] = target;
    n++; 

    for(int i=0; i<n ;i++){ 
        cout<< arr[i]<<" "; 
    }
    return 0; 
}