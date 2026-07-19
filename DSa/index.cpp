#include<iostream> 
using namespace std; 

int main() { 

    int n = 6; 

    int arr[n] = { 1 , 2 ,3 , 4 , 5 , 6 }; 

    int even = 0; 
    int odd  = 0; 

    for(int i =0 ; i<n ; i++) { 

        if(arr[i]%2==0){
            even++; 
        }else{

            odd++; 
        }

    }
    
    cout<<"Total even: "<<even<<endl; 

    cout<<"Total odd: "<<odd <<endl ; 

    return 0; 

}