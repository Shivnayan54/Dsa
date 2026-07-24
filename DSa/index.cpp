#include<iostream>
using namespace std; 

int maximum( int a , int b){ 

    if( a>b ){
        return a; 
    }else{
        return b;
    }
}

int main(){ 

    int x = maximum ( 10 , 5); 

    cout<<x ; 
} 