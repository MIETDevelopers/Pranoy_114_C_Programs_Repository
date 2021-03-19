#include <stdio.h>
int main() 
{
    int i, n, v1 = 0, v2 = 1, nextValue;
    
	printf("Enter the number of values: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) 
	{
        printf("%d, ", v1);
        nextValue = v1 + v2;
        v1 = v2;
        v2 = nextValue;
    }

    return 0;
}
