#include <stdio.h>
int main()
{
    char ch;
    // Get input from the user
    printf("\n Enter any character: ");
    scanf("%c", &ch);
    //check alphabate
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        // check for vowel
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
            printf("\n It is an vowel.\n\n");
    }
        else
    {
            printf("\n It is a consonant.\n\n");
    }
    
	}
    else
    {
        printf("\n It is not an vowel nor consonant.\n\n");
    }
    return 0;
}
