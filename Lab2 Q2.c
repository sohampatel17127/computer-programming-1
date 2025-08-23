#include<stdio.h>

void main()
{
int a,b,c;
printf("enter the value of a,b,c");
scanf("%d%d%d",&a,&b,&c);

if(a>b && a>c){
printf("a is the largest number");
}
else if(b>a && b>c){
printf("b is the largest number");
}
else{
printf("c is the largest number");
}

}
