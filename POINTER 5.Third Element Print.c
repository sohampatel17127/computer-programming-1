#include<stdio.h>
void main()

{
int arr[5]={20,30,80,90,60};
int i,*ptr;
ptr=arr;


printf("Your original array is here\n");
for(i=0;i<5;i++){
printf("%d  ",arr[i]);
}

printf("\n\n");


printf("Third elements of array via pointer = %d",*(ptr+2));





}
