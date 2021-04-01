//Author Name: Pranoy Bhan
//Creation Date: 30 March 2021
//Purpose: Pointer variable initialization with the address of another variable and then prints normal variable value and its address using pointer variable

#include <stdio.h>	//Preprocessor directive to include standard input output header file
int main()
{
   int a=10;    //variable declaration
   int *p;      //pointer variable declaration
   p=&a;        //store address of variable a in pointer p
  
   printf("Address stored in a variable p is:%x\n",p);  //accessing the address
   printf("Value stored in a variable p is:%d\n",*p);   //accessing the value
  
   return 0;
}
