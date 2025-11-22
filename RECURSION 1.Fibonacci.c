#include<stdio.h>
int fibonacci(int x);

int main()

{
int n,i;
printf("enter the number of terms : \n");
scanf("%d",&n);

printf("fibonacci is: \n");

for(i=1;i<=n;i++){
printf("%d",fibonacci(i));
printf(" ");
}

}

int fibonacci(int x)
{
if(x==0){
return 0;
}
else if(x==1){
return 1;
}
else{
return fibonacci(x-1)+fibonacci(x-2);
}




}
