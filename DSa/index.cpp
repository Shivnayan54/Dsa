#include<iostream>
using namespace std; 

int main(){ 

    int arr[5] = {10 , 20 , 30 , 40 , 50}; 

    int target = 30 ;

    for(int i=0; i<5 ; i++){

        if(arr[i] == target){

            cout<<"Target found at index: "<<i<<endl;

        }

    }

    return 0; 
}