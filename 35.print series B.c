#include<stdio.h>
void main()
{
int i,j;
for(i=1;i<=3;i++){
for(j=1;j<=3;j++){
if(!((i==1 && j!=1)|| (i==2 && j==3))){
printf("%d%d\n",i,j);
}
}
}


}
