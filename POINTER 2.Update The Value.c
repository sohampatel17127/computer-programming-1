#include<stdio.h>
void main()


{

int x=100;
int *ptr;

ptr = &x;

printf("%d",*ptr);
printf("\n\n");
printf("%u",&ptr);

printf("Now update the val\n");


printf("Enter the val for update x\n");
scanf("%d",&x);

printf("%d",*ptr);


}

