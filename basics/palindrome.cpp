// check palindrome number
#include <iostream>
using namespace std ;
int main ()
{
    int n , rev=0 , n1 ;
    cout<<"Enter a number : " ;
    cin>>n ;
    n1 = n ;
    while ( n>0 ) 
    {
        int r = n%10 ;
        rev = rev*10 + r ;
        n = n/10 ;
    }
    if ( rev==n1 )
    {
        cout<<"Palindrome number" ;
    }
    else
    {
        cout<<"Not a palindrome number" ;
    }
    return 0;
}