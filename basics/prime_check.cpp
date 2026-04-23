// check if a number is prime or not 
#include <iostream>
using namespace std ;
bool isPrime( int n )
{
    if ( n<=1 )
    {
        return false ;
    }
    else if ( n==2 )
    {
        return true ;
    }
    bool flag = true ;
    for ( int i=2 ; i*i<=n; i++ )
    {
        if ( n%i==0 )
        {
            flag = false ;
            break ;
        }
    }
    if ( flag )
    {
        return true ;
    }
    else 
    {
        return false ;
    }
}
int main ()
{
    int n ;
    cout<<"Enter a number : " ;
    cin>>n ;
    if ( isPrime(n) )
    {
        cout<<n<<" is a prime number" ;
    }
    else
    {
        cout<<n<<" is not a prime number " ;
    }
    return 0 ;
}