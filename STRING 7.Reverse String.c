#include<stdio.h>
#include<string.h>

void main()
{
    char text[20];

    printf("ENTER THE WORD FOR STRING\n ");
    scanf("%s", text);

    strrev(text);

    printf("Reversed: %s", text);
}
