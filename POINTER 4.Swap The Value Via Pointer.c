#include<stdio.h>
void main()


{
int a=400,b=500;
int *ptr1,*ptr2;

ptr1=&a;
ptr2=&b;
int temp;

printf("Your value before swaping\n");
printf("%d AND %d",*ptr1,*ptr2);

printf("\n\n")


printf("Now swaping value here\n");


temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;


printf("After sawaping number\n");

printf("%d AND %d",*ptr1,*ptr2);









}
