#include<stdio.h>


struct student{
int rollno;
char name[50];
int phy,chem,maths;
int total;
};

void main()
{
struct student s;

printf("enter the roll number :");
scanf("%d",&s.rollno);

printf("enter the name :");
scanf("%s",s.name);

printf("enter the marks of phy :");
scanf("%d",&s.phy);

printf("enter the marks of chem :");
scanf("%d",&s.chem);

printf("enter the marks of maths :");
scanf("%d",&s.maths);


s.total = s.phy+s.chem+s.maths;


printf("student details is here");
printf("\n\n");

printf("roll number = %d\n",s.rollno);
printf("name = %s\n",s.name);
printf("physics = %d\n",s.phy);
printf("chemistry = %d\n",s.chem);
printf("maths = %d\n",s.maths);
printf("total marks = %d\n",s.total);

}








