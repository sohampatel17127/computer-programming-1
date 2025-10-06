#include<stdio.h>
void main()
{
int i,arr1[5],arr2[10]={0};

printf("ENTER THE ELEMENTS FOR ARR1\n");
for(i=0;i<5;i++){
scanf("%d",&arr1[i]);
}

for(i=0;i<5;i++){
arr2[i*2]=arr1[i];
}

printf("YOUR NEW ARRAY IS HERE\n");
for(i=0;i<10;i++){
printf("%d   ",arr2[i]);
}


}
