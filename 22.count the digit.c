#include<stdio.h>
void main()

{

int num,digit,count=0;
printf("enter the number");
scanf("%d",&num);

while(num>0){
digit=num%10;
num=num/10;
count++;



}
printf("count=%d",count,digit);

}
