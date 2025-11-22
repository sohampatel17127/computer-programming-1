#include<stdio.h>

struct crktr{
char name[50];
int age;
int matchs;
float avgrun;
};

void main(){
struct crktr c[10],temp;
int i,j;

printf("enter the data of 10 crktr :\n");

for(i=0;i<10;i++){
printf("enter %d crktr details :\n",i+1);

printf("entre the name : \n");
scanf("%s",c[i].name);

printf("enter the age : \n");
scanf("%d",&c[i].age);

printf("enter the numbers of test match :\n");
scanf("%d",&c[i].matchs);

printf("enter the avg runs  :\n");
scanf("%f",&c[i].avgrun);

}

// for ascending order of avg runs


for(i=0;i<10;i++){
for(j=i+1;j<10;j++){
if (c[i].avgrun > c[j].avgrun ){
temp=c[i];
c[i]=c[j];
c[j]=temp;

}
}
}

printf("\n\n");


printf("our information is below :\n");

for(i=0;i<10;i++){
printf("name : %s\n",c[i].name);
printf("age : %d\n",c[i].age);
printf("matchs : %d\n",c[i].matchs);
printf("avgrun : %f\n",c[i].avgrun);

}






}
