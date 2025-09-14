#include<stdio.h>
int main()

{
int n,sum=0;
printf("enter the value of n");
scanf("%d",&n);

int odd=1;

for(int i=1;i<=n;i++){

//odd number

sum = sum+odd;
odd=odd+2;


}
printf("sum of first %d odd number=%d\n",n,sum);
return 0;

}
