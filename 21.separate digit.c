#include<stdio.h>
void main()
{
int num,digit,reverse=0;
printf("enter the  number");
scanf("%d",&num);

while(num>0){
digit=num%10;
num=num/10;
reverse=reverse*10+digit;
}
while(reverse>0){
    digit=reverse%10;
printf(" %d ",digit);
reverse=reverse/10;
}

}
