// print first n fibonacci numbers
#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    cout<<"Enter the number : " ;
    cin>>n ;
    cout<<"The fibonacci series is : "<<endl ;
    int a=0 , b=1 , c ;
    if ( n==1 )
    {
        cout<<a ;
    }
    else if ( n==2 )
    {
        cout<<a<<" "<<b ;
    }
    else 
    {
        cout<<a<<" "<<b<<" " ;
        for ( int i=0 ; i<n-2 ; i++ )
        {
            c = a+b ;
            a = b ;
            b = c ;
            cout<<c<<" " ;
        } 
    }
    return 0 ;
}