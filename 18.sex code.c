#include<stdio.h>
void main()

{
int i,girls,boys,count=0;
char sex;

printf("enterv the sex code : 'B' for boys and 'G' for girls");

for(i=1;i<=50;i++){
scanf(" %c",&sex);

if(sex=='B'){
count++;
}
boys=count;
girls=50-count;
}

printf("%d=girls AND %d=b0ys",girls,boys);

}
