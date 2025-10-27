#include<stdio.h>
void main()
{
int *ptr=NULL;                                 //null is replace by 0 it is possible

printf("Address of null= %u\n",ptr);


if(ptr==NULL){

printf("Pointer is NULL\n");

}
else{
printf("Pointer is not null\n");

}




}
