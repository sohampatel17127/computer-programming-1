#include<stdio.h>
void main()

{
int grossS,allowance,deduction,netS;
printf("enter the value of grossS");
scanf("%d",&grossS);

if(grossS>10000){
allowance=0.10*grossS;
deduction=0.03*grossS;
}
else if(grossS>5000)
{
allowance=0.07*grossS;
deduction=0.02*grossS;
}

netS=grossS+allowance-deduction;

printf("%d=netS\n",netS);


}
