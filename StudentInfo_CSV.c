// Author : Pranoy Bhan
// Creation date: 31 March 2021
// Purpose: C program to read name and marks of n number of students from user and store them in a file
#include <stdio.h>
#include<stdlib.h>
int main() 
{	//start of main function body
	
	char name[50];
	int marks,i,n;	//variable declaration
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("C:\\student.txt","w"));
	if(fptr==NULL) //if statement
	{
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) //forloop
	{
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter marks: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}	//end of main function body
