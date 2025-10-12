#include<stdio.h>
#include<string.h>

void main()
{
int result;
char text1[20];
char text2[20];

printf("ENTER THE 1ST WORD\n");
scanf("%s",&text1);

printf("ENTER TEH 2ND WORD\n");
scanf("%s",&text2);



result=strcmp(text1,text2);


if(result==0){
printf("BOTH ARE SAME");
}
else if(result>0){
printf("%s IS GREATER THAN %s",text1,text2);

}
else if(result<0){
printf("%s IS LESS THAN %s",text1,text2);

}


}
