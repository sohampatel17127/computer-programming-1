#include<stdio.h>
void main()

{
int sq,n;
printf("enter the number");
scanf("%d",&n);
sq=n*n;
if(sq%10==n || sq%100==n || sq%1000==n){
        //for maximum 3 digit number
printf("automorphic\n");
}
else{
        printf("not automorphic\n");}

}
