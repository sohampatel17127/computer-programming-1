#include<stdio.h>
#include<string.h>

void main()
{
char text[20];


printf("ENTER THE WORD FOR STRING\n");
scanf("%s",&text);

for(int i=strlen(text)-1;i>=0;i--){
printf("%c\n",text[i]);
}



}

