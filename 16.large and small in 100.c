#include<stdio.h>
void main()

{
int i,num,smallest,largest;
printf("enter any one number : ");
scanf("%d",&num);

smallest=largest=num;

for(i=2;i<=100;i++){
printf("enter number %d : ",i);
scanf("%d",&num);


if(num<smallest){
smallest=num;
}
if(num>largest){
largest=num;
}

}

printf("LARGEST=%d   smallest=%d\n",largest,smallest);

}
