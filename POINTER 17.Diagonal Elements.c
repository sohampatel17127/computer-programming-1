#include<stdio.h>
void main()

{
int arr[3][3];


printf("Enter the matric\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
scanf("%d",&arr[i][j]);
}


}
printf("\n\n");

printf(" The matric\n");
for(int i=0;i<3;i++){
for(int j=0;j<3;j++){
printf("%d\t ",arr[i][j]);
}
printf("\n");

}
printf("\n\n");


printf("Diagonal elemnts\n");

for(int i=0;i<3;i++){
    int *ptr;
    ptr=*(arr+i);
    printf("%d  ",*(ptr+i));

}


}
