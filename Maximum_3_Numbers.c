//Author : Pranoy Bhan
//Purpose: Function which takes 3 numbers as input and prints maximum of those 3 numbers
//Creation Date: 30 March 2021
#include <stdio.h>
int main() 
{	//Start of main function body
    double num1, num2, num3;
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // if num1 is greater than both num2 and num3, num1 is the largest
    if (num1 >= num2 && num1 >= num3)
        printf("%.2f is the largest number.", num1);

    // if num2 is greater than both num1 and num3, num2 is the largest
    if (num2 >= num1 && num2 >= num3)
        printf("%.2f is the largest number.", num2);

    // if num3 is greater than both num1 and num2, num3 is the largest
    if (num3 >= num1 && num3 >= num2)
        printf("%.2f is the largest number.", num3);

    return 0;
}	//End of main function body
