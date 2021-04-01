//Author Name: Pranoy Bhan
//Creation Date: 31 March 2021
//Purpose: sum of elements of an array with 10 integer elements

#include <stdio.h>	//Preprocessor directive to include standard input output header file
 int main() 
{	//start of main function body
    
	int i,arr[10],sum=0;	//variable declaration and array initialization
 
    printf("Enter 10 elements:"); 
    //forloop body
	for(i=0;i<10;++i) 
        scanf("%d",&arr[i]); 
 
    for(i=0;i<10;++i) 
        sum=sum+arr[i]; 
    printf("Sum of numbers is:%d",sum); 
 
    return 0; 
}	//end of main function body
