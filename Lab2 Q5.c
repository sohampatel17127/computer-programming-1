#include<stdio.h>
void main()

{
float grossS,discount,netS;
printf("enter value of grossS");
scanf("%f",&grossS);

if(grossS>20000){
discount=grossS*0.15;
}
else if(10000<grossS<20000){
discount=grossS*0.10;
}
else{
discount=grossS*0.05;
}
netS=grossS-discount;

printf("netS=%f\n",netS);

}



































