#include<iostream> 
using namespace std; 

int main() 
{

    int arr[5] = {5, 2 , 9, 1, 7};

    int largest = arr[0];

    for(int i =1 ; i<5 ; i++){ 

        if( largest > arr[i]){
            
            largest = largest; 

        } else {
            largest = arr[i]; 
        }

    }

    cout<<largest ;

    return 0;
}