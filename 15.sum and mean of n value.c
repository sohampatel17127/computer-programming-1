#include<stdio.h>
void main()

{
int i,n,num;
float sum=0,mean;

printf("enter n number");
scanf("%d",&n);

printf("enter %d  number\n",n);
for(i=1;i<=n;i++){
scanf("%d",&num);
sum=sum+num;

}
mean=sum/n;

printf("sum=%.2f\n",sum);
printf("mean=%.2f\n",mean);




}
