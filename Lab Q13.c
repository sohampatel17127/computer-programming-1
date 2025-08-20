#include<stdio.h>

int main()
{

int bytes,kb,mb,gb;
printf("enter size in bytes");
scanf("%d",&bytes);

kb=bytes/1024;
mb=bytes/(1024*1024);
gb=bytes/(1024*1024*1024);

printf("%d=kb %d=mb %d=gb\n",kb,mb,gb);
return 0;






}
