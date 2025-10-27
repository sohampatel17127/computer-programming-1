#include<stdio.h>
void main()

{

char text[]="soham";
char *ptr;
ptr=text;


printf("Your original string is here = %s \n",text);
printf("\n\n");

for(int i=0;i<strlen(text);i++){
printf(" %c  is character and  %u  is address of character\n",*ptr,ptr);
ptr++;
}


}


