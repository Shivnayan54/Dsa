#include<iostream>
using namespace std; 

int main() 
{

    int arr[7] = {1, 0, 2, 0, 3, 0, 4};

    int n = 7; 

    int index = 0; 

    for(int i=0; i<n ; i++) { 

        if(arr[i] != 0 ) {
          swap(arr[i] , arr[index]) ; 
          index++ ; 

        }

    }

    for(int i=0 ; i<n ; i++){ 
        cout<<arr[i] ; 
    }

    return 0; 
}