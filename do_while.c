//Author Name: Pranoy Bhan
//Creation Date: 31 March 2021
//Purpose: To demonstrate do while program

#include<stdio.h>	//Preprocessor directive to include standard input output header file
int main()
{	//start of main function body
	
	int num=1;	//initializing the variable
	do	//do-while loop 
	{
		printf("%d\n",2*num);
		num++;		//incrementing operation
	}	while(num<=10);
	
	return 0;
}	//end of main function body
