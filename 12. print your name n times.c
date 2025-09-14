#include<stdio.h>
int main()

{

char name[30];
printf("enter your name");
scanf("%s",&name);

int i,n;
printf("enter the value of n");
scanf("%d",&n);

for(int i=1;i<=n;i++){
printf("%s\n",name);

}
return 0;


}
