#include<stdio.h>
void main()

{
int i,num,positive=0,negative=0,zero=0;
printf("enter 200 number:\n");


for(i=1;i<=200;i++){
scanf("%d",&num);
if(num>0){
positive++;
}
else if(num<0){
negative++;
}
else{
zero++;
}
}

printf("count of positive number\n",positive);
printf("count of negative number\n",negative);
printf("count of zero \n",zero);



}
