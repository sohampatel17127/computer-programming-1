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
    printf("YOUR ARRAY IS FULL !! NOT INSERT\n");
}
else{
int index;
printf("ENTER THE INDEX  FOR SPECIFIC POSITION INSRTION 0 TO %d\n",n);
scanf("%d",&index);

printf("CHOOSE NUMBER FOR INSERTION\n");
scanf("%d",&num);


for(i=n;i>index;i--){
arr[i]=arr[i-1];
}
arr[index]=num;
n++;
}

printf("YOUR NEW ARRAY IS HERE\n");
for(i=0;i<n;i++){
    printf("%d  ",arr[i]);
}
}
