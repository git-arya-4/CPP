// Check if number is positive, negative, or zero
#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    cout << "Enter a number : " ;
    cin >> n ;
    if ( n>=0 )
    {
        if ( n==0 )
        {
            cout<<"Entered number is zero" ;
        }
        else 
        {
            cout<<"Entered number is positive" ;
        }
    }
    else 
    {
        cout<<"Entered number is negative" ;
    }
    return 0 ;
}