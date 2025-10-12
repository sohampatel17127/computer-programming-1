#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()


{
char  text[20];

printf("ENTER THE WORD FOR TOGGLE");
scanf("%s",&text);

for(int i=0;i<strlen(text);i++){

if(isupper(text[i])){
text[i]=tolower(text[i]);
}

else{
text[i]=toupper(text[i]);
}
}


printf("%s",text);


}


