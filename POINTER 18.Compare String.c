#include<stdio.h>
void main()
{
    char str1[20], str2[20];
    char *p1, *p2;
    int i = 0;

    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);

    p1 = str1;
    p2 = str2;


    while(*p1 == *p2)
    {
        if(*p1 == '\0')
        {
            printf("Strings are EQUAL\n");
            return;
        }
        p1++;
        p2++;
        i++;
    }

    printf("Strings are DIFFERENT\n");
    printf("First difference at index %d: '%c' vs '%c'\n", i, *p1, *p2);
}
