#include<stdio.h>
void main()

{
int i,n,sum=0;
printf("enter the n");
scanf("%d",&n);

for(i=1;i<=n/2;i++){
if(n%i==0){
sum=sum+i;
}
}

if(sum==n){
printf("this is perfact\n");

}else{
printf("this is not perfact\n");
}

}

