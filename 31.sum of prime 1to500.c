#include<stdio.h>
void main()

{
int i,num,count,sum=0;

for(num=1;num<=500;num++){
        count=0;
        for(i=1;i<=num;i++){
if(num%i==0){
count++;
}
}

if(count==2){
printf("%d\n",num);
sum=sum+num;

}

}

printf("sum=%d",sum);
}
