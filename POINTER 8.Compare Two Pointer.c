#include<stdio.h>
void main()

{
int x=200;
int *ptr1,*ptr2;
ptr1=&x;
ptr2=&x;

printf("Address in ptr1 = %u\n",ptr1);
printf("Address in ptr2 = %u\n",ptr2);


if(ptr1==ptr2){

printf("Both memory location is SAME\n");
}

else{

printf("Both memory location is DIFFERENT\n");
}





}
