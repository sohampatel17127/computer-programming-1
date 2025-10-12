#include<stdio.h>
#include<string.h>

void main()

{
    char text[20],newtext[20];

    printf("ENTER THE STRING FOR COPY ");
    scanf("%s", text);

    strcpy(newtext,text);

    printf("Original: %s\n", text);
    printf("Copied: %s", newtext);
}
