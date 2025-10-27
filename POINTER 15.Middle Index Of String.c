#include<stdio.h>
#include<string.h>
void main()

{
char name[20];
char *midptr,*remptr;
int length,middle_index;



printf("Enter your string\n");
scanf("%s",name);

length=strlen(name);
middle_index=length/2;


printf("%d = length and %d = middle_index\n",length,middle_index);


midptr=name+middle_index;
printf("\n\nMiddle character = %c\n",*midptr);

remptr=midptr;

printf("Remainder from stringe is here\n");

for(int i = middle_index; i < strlen(name); i++)
{
    printf("%c", name[i]);
}




}
