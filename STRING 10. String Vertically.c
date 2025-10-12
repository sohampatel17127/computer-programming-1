#include<stdio.h>
#include<string.h>

void main()
{
char text[20];


printf("ENTER THE WORD FOR STRING\n");
scanf("%s",&text);

for(int i=0;i<strlen(text);i++){
printf("%c\n",text[i]);
}



}


