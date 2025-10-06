#include<stdio.h>
void main()
{


int i,j,a[5],temp;
printf("ENTER THE ARRAY ELEMENTS\n");
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}

for(i=0;i<4;i++){
for(j=0;j<4-i;j++){
if(a[j]<a[j+1]){                       //  < is for descending big to small
temp=a[j];                             //  > is for aescending small to big
a[j]=a[j+1];
a[j+1]=temp;


}
}
}

printf("YOUR BUBBLESORT ARRAY IS HERE\n");

for(i=0;i<5;i++){
printf("%d ",a[i]);
}


}
