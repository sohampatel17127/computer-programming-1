#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()

{
char text[20];

printf("enter the word in UPPERCASE\n");                  //for withoutspace name
scanf("%s",&text);                           //for name with space scanf mei %s ki jagh %[^\n]s likhna hai


for(int i=0;i<strlen(text);i++){
text[i]=tolower(text[i]);
}


printf("lowercase IS HERE \n");
printf("%s",text);
}
