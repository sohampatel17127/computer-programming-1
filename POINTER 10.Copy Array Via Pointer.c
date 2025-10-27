#include<stdio.h>
void main()
{
int arr1[5]={25,30,40,90,80};
int arr2[5];
int *ptr;
ptr=arr1;


printf("Your origunal array is here\n");
for(int i=0;i<5;i++){
printf("%d  ",arr1[i]);
}
printf("\n\n");

printf("Now copy one array to another array\n");

//process

for(int i=0;i<5;i++){
arr2[i]=*(ptr+i);
}

printf("Your another copy array is here\n");
for(int i=0;i<5;i++){
printf("%d  ",arr2[i]);
}

}
