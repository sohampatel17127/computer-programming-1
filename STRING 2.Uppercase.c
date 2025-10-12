#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()

{
char text[10];

printf("ENTER THE WORD IN loweercase\n");    //for withoutspace name
scanf("%s",&text);                     //for name with space scanf mei %s ki jagh %[^\n]s likhna hai

for(int i=0;i<strlen(text);i++){

    text[i]=toupper(text[i]);

}

printf("UPPER word is here\n");
printf("%s",text);

}
