#include<stdio.h>
int fact(int x);


void main()

{
int n,factorial;
printf("enter the number for factorial :\n");
scanf("%d",&n);

factorial = fact(n);
printf("the factorial of given number is %d\n",factorial);


}

int fact(int x)
{
if(x==0 || x==1){
return 1;
}
else {
return x*fact(x-1);
}
}



