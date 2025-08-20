#include<stdio.h>
#include<conio.h>

void main()

{
float P,R,N,I;
printf("enter principal,rate,time in year");
scanf("%f%f%f",&P,&R,&N);

I=(P*R*N)/100.0;

printf("%f=I\n",I);
getch();


}
