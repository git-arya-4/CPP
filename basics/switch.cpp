// Simple calculator using switch
#include <iostream>
using namespace std ;
int main ()
{
    int a , b ;
    char op ;
    cout<<"Enter the expression to be calculated : " ;
    cin >>a>>op>>b ;
    cout<<"Result: " ;
    switch(op)
    {
        case '+' :
            cout<<a+b ;
            break ;
        case '-' : 
            cout<<a-b ;
            break ;
        case '*' :
            cout<<a*b ;
            break ;
        case '/' :
            cout<<a/b ;
            break ;
        case '%' : 
            cout<<a%b ;
            break ;
        default :
            cout<<"Invalid" ;
    }
    return 0 ;
}