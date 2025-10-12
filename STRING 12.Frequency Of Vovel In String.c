#include<stdio.h>
#include<string.h>
void main()

{
char text[20];
int a=0,e=0,i=0,o=0,u=0;
printf("ENTER THE WORD FOR STRING\n");
scanf("%s",&text);

for(int j=0;j<strlen(text);j++){

if(text[j]=='a'){a++;}
else if(text[j]=='e'){e++;}
else if(text[j]=='i'){i++;}
else if(text[j]=='o'){o++;}
else if(text[j]=='u'){u++;}

}

printf("counting of vovel is here\n");

printf("%d=COUNT OF a\n",a);
printf("%d=COUNT OF e\n",e);
printf("%d=COUNT OF i\n",i);
printf("%d=COUNT OF o\n",o);
printf("%d=COUNT OF u\n",u);





}
