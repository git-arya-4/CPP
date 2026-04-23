// find the sum of the array elements 
#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    cout<<"Enter the size of the array : " ;
    cin>>n ;
    int arr[n] , sum=0 ;
    cout<<"Enter the elements of the array : "<<endl ;
    for ( int i=0 ; i<n ; i++ )
    {
        cin>>arr[i] ;
        sum = sum + arr[i] ;
    }
    cout<<"The sum of the array elements is : "<<sum ;
    return 0 ;
}  