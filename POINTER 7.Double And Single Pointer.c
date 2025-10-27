#include<stdio.h>
void main()

{
int x=200;
int *ptr;
int **pptr;

ptr=&x;
pptr=&ptr;


printf("Your original x = %d\n",x);
printf("Val of x via single pointer = %d\n",*ptr);
printf("Val of x via double pointer = %d\n",**pptr);




}



