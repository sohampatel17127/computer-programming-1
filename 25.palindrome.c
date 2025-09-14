#include<stdio.h>
void main()
{
int num,digit,reverse=0,orignalnum;
printf("enter the number");
scanf("%d",&num);
orignalnum=num;

while(num>0){
digit=num%10;
num=num/10;
reverse=reverse*10+digit;

}
printf("reverse number=%d\n",reverse);

if(orignalnum==reverse){
printf("this is palindrome");
}
else{
printf("this is not palindrome");
}

}
