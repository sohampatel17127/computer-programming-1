#include<stdio.h>
void main()

{
int i,n,a=0,b=1,next;
printf("how many terms you wish");
scanf("%d",&n);

printf("according to you fibonacci series\n");

for(i=1;i<=n;i++){

printf(" %d ",a);

next=a+b;
a=b;
b=next;

}




}
