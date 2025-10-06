#include<stdio.h>
void main()

{

int a[5],i;
printf("ENTER THE VALUES ::\n");

for(i=0;i<5;i++){
scanf("%d",&a[i]);
}

printf("REVERSE ARRAY ::\n");
for(i=4;i>=0;i--){
printf("%d\n",a[i]);

}


}
