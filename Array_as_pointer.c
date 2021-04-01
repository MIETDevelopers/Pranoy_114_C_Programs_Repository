//Author Name: Pranoy Bhan
//Creation Date: 30 March 2021
//Purpose: array name as pointer representation and print its elements values

#include <stdio.h>	//Preprocessor directive to include standard input output header file
int main( )
{
   //Pointer variable
   int *p;

   //Array declaration
   int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;

   /* Assigning the address of val[0] the pointer
    * You can also write like this:
    * p = var;
    * because array name represents the address of the first element
    */
   p = &val[0];

   for ( int i = 0 ; i<7 ; i++ )
   {
      printf("val[%d]: value is %d and address is %p\n", i, *p, p);
      //Incrementing the pointer so that it points to next element on every increment.
      p++;
   }
   return 0;
}
