#include<stdio.h>
void main()

{
int x = 99;
int *ptr1;
int **ptr2;
int ***ptr3;

ptr1=&x;
ptr2=&ptr1;
ptr3=&ptr2;


printf("Now print your val via triple pointer");

printf("\n\n");


printf("%d is your value\n",*ptr1);
printf("%d is your value\n",**ptr2);
printf("%d is your value\n",***ptr3);


}

