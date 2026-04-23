// count digits in a number
#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    cout<<"Enter a number : " ;
    cin>>n ;
    int count = 0 ;
    while ( n>0 )
    {
        count++ ;
        n=n/10 ;
    } 
    cout<<"The number of digits are : "<<count ;
    return 0 ;
}