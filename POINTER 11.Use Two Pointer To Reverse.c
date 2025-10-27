#include<stdio.h>
void main()


{
int arr[5]={10,20,40,60,80};
int *ptr1;
int *ptr2;

ptr1=&arr[0];
ptr2=&arr[4];


printf("Your original array is here\n");
for(int i=0;i<5;i++){
printf("%d  ",arr[i]);
}

printf("\n\n");

printf("Now reverse your array via two pointer\n");
while(ptr2>=ptr1){

    printf("%d ",*ptr2);
    ptr2--;
}


}


