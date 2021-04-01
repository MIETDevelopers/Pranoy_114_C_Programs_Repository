//Author Name: Pranoy Bhan
//Creation Date: 16 March 2021
//Purpose: check if number is prime or not
#include <stdio.h>   //Preprocessor directive to include standard input output header file
int main()
{  //start of main function body
   int n, i, count = 0; //variable declaration
 
    printf("Enter number to check prime number or not :");
    scanf("%d",&n);
   // using whileloop
    i=2;
    while( i<=n/2)
    {
        
        if(n%i==0)	// check for non prime number
        {
            count=1;
            break;
        }
        i++;
    }
 
    if (count==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
 
    getch();
    
}  //end of main function body
