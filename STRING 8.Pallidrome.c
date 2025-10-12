#include<stdio.h>
#include<string.h>
void main()

{
char text[20],reverse[20];

printf("ENTER THE WORD FOR STRING\n");
scanf("%s",&text);

strcpy(reverse,text);
strrev(reverse);
if(strcmp(text,reverse)==0){
printf("YES");
}
else{

printf ("NO");
}



}
