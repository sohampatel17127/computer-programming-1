#include<stdio.h>
void main()

{
int a[4][4],t[4][4],i,j;

printf("ENTER YOUR MATRIX ::\n");
for(i=0;i<4;i++){
for(j=0;j<4;j++){
scanf("%d",&a[i][j]);
}
}

for(i=0;i<4;i++){
for(j=0;j<4;j++){
t[i][j]=a[j][i];
}
}
for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf("%d",a[i][j]);
}
printf("\n");
}

printf("\nTRANSPOSE::\n");
for(i=0;i<4;i++){
for(j=0;j<4;j++){
printf("%d",t[i][j]);
}
printf("\n");
}

}
