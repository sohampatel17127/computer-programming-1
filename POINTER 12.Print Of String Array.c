#include<stdio.h>
void main()

{
char *names[5]={"SOHAM","SHIV","RAJADHIRAJ","AANT","MAHAKAL"};
char **ptr;

ptr=names;

printf("Your original string is here\n");
for(int i=0;i<5;i++){
printf("%s   ",names[i]);
}

printf("\n\n your third elements is here\n");
printf("Third name = %s",*(ptr+2));



}
