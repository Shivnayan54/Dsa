#include<iostream> 
using namespace std; 

int main() 
{

    int arr[5] = {10 , 40 ,20 ,50 ,30};

    int largest = arr[0];
    int secondLargest = 0; 
    for(int i =1 ; i<5 ; i++){ 

        if( arr[i] > largest ){
            
            secondLargest = largest; 
            largest = arr[i]; 
            
        }  else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }

    }

    cout<<"Largest is : " <<largest<<" " << endl ; 

    cout<<"The secondLargest is: "<<secondLargest; 
    

    return 0;
}