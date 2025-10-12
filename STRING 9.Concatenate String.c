#include<stdio.h>
#include<string.h>
void main()

{

char text1[20];
char text2[20];

printf("enter the 1st word\n");  //do string to jode ke ek line mei karna yani ki sentencce banana hai
scanf("%s",&text1);

printf("enter the 2nd word\n");
scanf("%s",&text2);


strcat(text1,text2);

printf("RESULT IS HERE = %s\n",text1);




}
