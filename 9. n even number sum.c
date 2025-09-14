#include<stdio.h>
int main()

{
int n,sum=0;
printf("enter the value of n");
scanf("%d",&n);

int even=2;

for(int i=1;i<=n;i++){

//even number

sum = sum+even;
even=even+2;


}
printf("sum of first %d even number=%d\n",n,sum);
return 0;

}
