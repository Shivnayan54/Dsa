#include<iostream> 
using namespace std; 

int main() { 
    
    int arr[7] = {1 , 2 , 3 , 4 , 5 , 6 , 7} ; 

    int n = 7; 

    int left =2; 
    int right =6;
    
    while(left<right){ 
        int temp = arr[left]; 
        arr[left] = arr[right]; 
        arr[right] = temp; 

        left++; 
        right--;
    }
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" "; 
    }
    
    return 0; 
}   