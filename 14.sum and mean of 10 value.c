#include<stdio.h>
void main()

{
int i,num;
float sum=0,mean;

printf("enter 10 number");
for(i=1;i<=10;i++){
scanf("%d",&num);
sum=sum+num;

}
mean=sum/10;

printf("sum=%.2f\n",sum);
printf("mean=%.2f\n",mean);




}
