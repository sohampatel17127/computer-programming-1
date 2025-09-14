#include<stdio.h>
#include<math.h>
void main()
{

int num,digit,sum=0,originalnum;
printf("enter the number");
scanf("%d",&num);
originalnum=num;

while(num>0){
digit=num%10;
num=num/10;
sum=sum+(digit*digit*digit);
}
printf("sum=%d\n",sum);


if(sum==originalnum){
    printf("armstrong number\n");
}
else{
    printf("not armstrong number\n");
}

}
