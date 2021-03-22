//Author: Pranoy Bhan
//creation date:22 March 2021
//Purpose: Store the information of student marks using structures and find total marks of individual student.

#include <stdio.h>  //Preprocessor directive to include standard input and output functions header file
struct student 
{	//structure body starts
    char name[50];	//members name array
    int roll;	//member variable
    float marks;	//member variable 
} p;	//variable declaration for dot operator
//structure body ends
int main() 
{	//main function body starts
    //This will read the user input.
    printf("Enter information:\n");	//printf function calling to print Enter information
    printf("Enter name: ");	//printf function calling to print Enter name
    fgets(p.name, sizeof(p.name), stdin);	//read input

    printf("Enter roll number: ");	//printf function calling to print Enter roll number
    scanf("%d", &p.roll);	//scanf function calling to read user input
    printf("Enter marks: ");	//printf function calling to print Enter marks
    scanf("%f", &p.marks);	//scanf function calling to read user input

    //This will print the user input.
    printf("Displaying Information:\n");	//printf function calling to print Displaying Information
    printf("Name: ");	//printf function calling to print Name
    printf("%s", p.name);	//printf function calling to print name
    printf("Roll number: %d\n", p.roll);	//printf function calling to print Roll number
    printf("Marks: %.1f\n", p.marks);	//printf function calling to print marks

    return 0;  //return function
}	//main function body ends
