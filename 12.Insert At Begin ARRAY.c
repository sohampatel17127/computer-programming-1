#include<stdio.h>
void main()

{
int i,n,arr[10],num;
printf("ENTER THE NUMBER FOR ARRAY SIZE\n");
scanf("%d",&n);

printf("ENTER THE ARRAY ELEMENTS\n");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

printf("YOUR ORIGINAL ARRAY IS HERE\n");
for(i=0;i<n;i++){
printf("%d  ",arr[i]);
}

printf("\n\n");

if(n>=10){
    printf("your array is full !! not insert\n");
}
else{

printf("ENTER THE NUMBER FOR INSERTION AT BEGIN\n");
scanf("%d",&num);
for(i=n;i>0;i--){
    arr[i]=arr[i-1];
}

arr[0]=num;
n++;

}

printf("YOUR NEW ARRAY IS HERE\n");
for(i=0;i<n;i++){
    printf("%d  ",arr[i]);
}

}
