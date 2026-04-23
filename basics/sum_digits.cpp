// calculate the sum of digits of a number 
#include <iostream>
using namespace std ;
int main ()
{
    int n ;
    cout<<"Enter a number : " ;
    cin>>n ;
    int sum = 0 ;
    while ( n>0 )
    {
        int r = n%10 ;
        sum = sum + r ;
        n = n/10 ;
    }
    cout<<"The sum of the digits is : "<<sum ;
    return 0 ;
}