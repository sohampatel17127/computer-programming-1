#include<stdio.h>
#include<conio.h>

void main()

{
float length,width,parameter,area;
printf("enter rectengle length and width");
scanf("%f%f",&length,&width);

parameter=length*width;
area=2*(length+width);

printf("%f=parameter\n",parameter);
printf("%f=area\n",area);
getch();




}
