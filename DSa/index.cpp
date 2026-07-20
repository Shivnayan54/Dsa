#include<iostream>
using namespace std; 

int main(){ 

    int arr[5] = {10 , 20 , 20 , 30 , 20}; 

    int mini = arr[0];

    for(int i=1; i<5 ; i++) {
        
        if(arr[i] < mini) {
            mini = arr[i];
        }
    }

        
    }
    
    cout<<"The minimum element in the array is : "<<mini<<endl;
    
    return 0; 
}