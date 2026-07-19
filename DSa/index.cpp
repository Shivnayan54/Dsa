#include<iostream>
using namespace std; 

int main(){ 

    int arr[5] = {10 , 20 , 20 , 30 , 20}; 

    int target = 20 ;
    int occurrences = 0;

    for(int i=0; i<5 ; i++){

        if(arr[i] == target){

            occurrences++;

        }

        
    }

    cout<<"Number of occurrences of " << target << " is: " << occurrences << endl;
    return 0; 
}