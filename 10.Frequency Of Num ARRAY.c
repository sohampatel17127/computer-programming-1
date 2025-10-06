#include<stdio.h>
void main()
{
int i,n,num,arr[20],count=0;
printf("ENTER THE SIZE OF ARRAY 0 TO 20\n");
scanf("%d",&n);

printf("ENTER THE ELEMENTS OF ARRAY\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("ENTER THE ORIGINAL ARRAY\n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}

printf("\n\n");

printf("ENTER THE NUMBER FOR CHECKING IT FREQUENCY\n");
scanf("%d",&num);

for(i=0;i<n;i++){
    if(arr[i]==num){
        count++;
    }
}

printf("FREQUENCY OF %d = %d",num,count);
}


