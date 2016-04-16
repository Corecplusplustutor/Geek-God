/*******************************************************************
*******                    
*******   Visit https://corecplusplustutorial.com/
*******             for C++ tutorial
*******                
*******************************************************************/  

#include <iostream>

using namespace std ;

int main( )
{
   long long int n1;
   cout<<"Enter an integer to check if it is a power of 2 \n" ;
   cin>> n1 ;

   cin.ignore();

   unsigned int r=n1^( n1 - 1 ) ;
   if(( n1 & r ) == n1 )
   {
      cout<< n1 << " is a power of 2 ";
   }
   else cout<< n1 << " is not a power of 2 ";

   cin.get() ;
   return 0 ;
}
