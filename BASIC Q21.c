#include<stdio.h>

void main()

{
float grossSalary,allowance,deduction,netSalary;

printf("enter grossSalary");
scanf("%f",&grossSalary);

allowance=grossSalary*0.10;
deduction=grossSalary*0.03;
netSalary=grossSalary+allowance-deduction;

printf("%f=netSalary\n",netSalary);





}
