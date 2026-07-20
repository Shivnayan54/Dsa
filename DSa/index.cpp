#include<iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 20, 30, 20};

    int target = 30 ; 
    int occurrences = 0;

    for(int i =0 ; i<5 ; i++){ 

        if( arr[i] == target){
            cout<<"element exists at index "<<i<<" = "<<target<<endl; 
            occurrences++;
        }else {
            cout<<"element does not exist at index "<<i<<" "<<endl;

        } 

        }
  

    return 0;
}