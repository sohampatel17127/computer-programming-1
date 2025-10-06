#include<stdio.h>
void main()

{

int i,val[5];
printf("enter 5 value");

for(i=0;i<5;i++){
scanf("%d",&val[i]);
}

for(i=0;i<5;i++){
printf("your %d value = %d\n",i+1,val[i]);
}

}
