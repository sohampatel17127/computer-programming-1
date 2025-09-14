#include<stdio.h>
int main()

{
int i,sum=0;

for(int i=1;i<=100;i++){
if(i%13 != 0){
continue;
}
sum = sum+i;
}

printf("%d=sum\n",sum);

return 0;

}

