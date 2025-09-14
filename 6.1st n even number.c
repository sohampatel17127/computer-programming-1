#include<stdio.h>
int main()

{
int i,n;
printf("enter the value of n");
scanf("%d",&n);


for(int i=0;i<=n;i++){
if(i%2 !=0){
continue;
}
printf("%d\n",i);

}
return 0;
}


