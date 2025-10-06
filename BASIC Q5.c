#include<stdio.h>
#include<conio.h>

void main()

{
float a,b,addition,subtract,multiply,divide;

printf("enter two number");
scanf("%f%f",&a,&b);

addition=a+b;
subtract=a-b;
multiply=a*b;
divide=a/b;

printf("%f=addition\n",addition);
printf("%f=subtract\n",subtract);
printf("%f=multiply\n",multiply);
printf("%f=divide\n",divide);

getch();

}
