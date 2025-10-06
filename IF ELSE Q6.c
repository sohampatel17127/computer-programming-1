#include<stdio.h>
void main()

{
float sub1,sub2,sub3,average;
printf("enter marks of 3 subjects");
scanf("%f%f%f",&sub1,&sub2,&sub3);

average=(sub1+sub2+sub3)/3.0;

if(average>=70){
printf("distinction");
}
else if(average>=60){
printf("first");
}
else if(average>=50){
printf("second");
}
else if(average>=35){
printf("third class");
}
else{
printf("fail");
}

}
