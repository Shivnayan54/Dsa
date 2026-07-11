//1  C++ program to find the largest and smallest number in an array
/* 
#include<iostream> 
using namespace std; 
int main()
{
  int n; 
  
  cout<<"enter the size of an array: "; 
  cin>>n; 

    int arr[n]; 
    
    cout<<"enter the number of elements : "; 

  for (int i=0; i<n; i++){
    cin>>arr[i]; 
  }

  int largest = arr[0]; 
  int smallest = arr[0]; 

  for(int i=1; i<n; i++){
    if(largest <arr[i]){
      largest = arr[i]; 
    }
  

    if(arr[i]<smallest)
    {
      smallest = arr[i]; 
    }
  }
   cout<<"the largest number is: "<<largest << endl ; 

  cout<<"the smallest number is: "<<smallest << endl ; 

  return 0;

}
  */


  //2  C++ program to check if an array is sorted or not ?
  /*#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool sorted = true;

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }

    if(sorted)
    {
        cout << "Sorted";
    }
    else
    {
        cout << "Not Sorted";
    }

    return 0;
}*/
 

//3  c++ prgram to count positive, negative and zero numbers in an array

/*
#include<iostream> 
using namespace std; 

int main()
{

  int n; 

  cout<<"enter the size of an array: "; 

  cin >> n; 

  int arr[n]; 

  cout<<"enter the elements: "; 

  int positive = 0;
  int negative = 0; 
  int zero     = 0; 

  for ( int i=0; i<n ; i++){
    
    cin>>arr[i];

  }

  for(int i=0; i<n ; i++){
    if(arr[i] > 0)
    {
      positive++; 
    }
    else if(
      arr[i] == 0 
    ) {
      zero++; 
    } 
    
    else {
      negative++; 
    }

  
  }
  cout<<"the positive number is : "<<positive << endl; 
    cout<<"the negative number is : "<<negative << endl; 
    cout<<"the zeros are : "<<zero <<endl; 

  return 0; 

}
*/

//4 c++ program to count Frequency of an element 

/*
#include<iostream> 
using namespace std; 

int main(){

int n; 
cout<<"enter the size of an array :" ; 

cin>>n; 

int arr[n]; 

cout<< "enter the target : " ; 
int target; 
cin>> target ;
int frequency = 0 ;
cout<<"enter the elements of an array: ";

 for (int i = 0; i<n ; i++ ){ 

  cin>> arr[i] ;  

  if(arr[i] == target)
  {
    frequency++ ; 
  }


 }

 cout<< frequency ; 

}
*/ 

//5 c++ program to Move all zeros to end 

/*
#include <iostream> 
using namespace std; 

int main() {

   
    int j = 0 ; 

  int arr[6] = { 1 , 0 , 2 , 0 , 4 , 5  }; 

  for (int i =0 ; i<6 ; i++){

    if(arr[i] != 0){
      
      int temp = arr[i]; 
      arr[i] = arr[j]; 
      arr[j] = temp; 

      j++; 
    }
    
  }

  cout<< "Array after moving zeros to the end: "; 

  for(int i = 0; i < 6; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

}
  */

  // Remove Duplicates from sorted array 

  /*
  #include<iostream> 
  using namespace std; 

  int main()
  {
    
     int n; 

     cout << "Enter the size of the array: "; 
     cin>> n; 

     int arr[n]; 

     cout<< "Enter the elements (sorted array): "; 

     for (int i = 0 ; i < n ; i++)
     {
      cin>>arr[i]; 
     }

     if(n == 0) 
      {
        cout<< "Array is empty."; 
        return 0; 
      }




      int j = 0 ; 

      for ( int i = 1 ; i<n ; i++)
       {
          if (arr[i] != arr[j])
          {
            j++ ; 
            arr[j] = arr[i]; 
          }

       }
       
       cout << "Array after removing duplicates: "; 

       for(int i = 0; i <= j; i++)
       {
        cout << arr[i]<< " ";
       }
       return 0; 

  }
       */

// Left Rotate an Array by One 
/*
#include <iostream>
using namespace std; 

int main() 
{
  int n; 

  cout<< "Enter the size of an array: "; 

  cin>> n; 

  if(n == 0) 
  {
    cout << "Array is empty."; 
    return 0; 
  }

  int arr[n]; 

  int left = 0; 

  int right = n-1 ; 

  cout<< "Enter the number of elements: "; 

  for ( int i = 0; i<n ; i++){ 
    cin>>arr[i] ; 
  }
  
  int temp = arr[0]; 

  for ( int i = 0 ; i<n-1 ; i++){ 

      arr[i] = arr[i+1]; 
    
    }

    arr[n - 1] = temp; 

    cout << "After Left Rotation: "; 

    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " "; 
    }

    return 0; 
    
  }
    */

#include<iostream> 

using namespace std; 

int main() 
{

  int arr[] = {10 , 20 , 30 , 40, 50} ;

  int n = 5; 
  
  int target = 25; 

  int left = 0; 
  int right = n-1 ; 

  while(left<=right)
   {
    int mid = (left + right ) / 2 ; 

    if( arr [mid] == target )
     {
      cout<<"targeted number found: "<<mid ; 
      return 0; 
     }

     else if (target > arr[mid])
     {
       
      left = mid +1;   

     } 
     
     else 
     {
        right = mid - 1; 
     }
     
   }

   cout << left;
return 0;


}