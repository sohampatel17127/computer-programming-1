#include<stdio.h>
int main()

{
int i,n,fact=1;
printf("enter the value of n");
scanf("%d",&n);

for(int i=1;i<=n;i++){
fact=fact*i;
}
printf("final factorial fact=%d\n",fact);
return 0;

}
