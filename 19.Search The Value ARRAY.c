#include<stdio.h>
void main()

{
int a[5]={1,2,3,4,5},i,x,found=0;
printf("enter the your number which wish to you find");
scanf("%d",&x);

for(i=0;i<5;i++){
if(a[i]==x){
found=1;
break;
}
}


if(found){
printf("yes found at position (for 0 based index) %d",i);
}
else{
printf("not found");
}



}
