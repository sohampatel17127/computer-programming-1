#include<stdio.h>
void main()

{

int i,n,arr[10],index;
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

if(n<=0){
    printf("YOUR ARRAY IS EMPTY !! NOT DELETION\n");
}
else{

printf("(0 based index)ENTER THE INDEX a FOR SPECIFIC POSITION DELETION 0 TO %d\n",n);
scanf("%d",&index);




for(i=index;i<n-1;i++){
arr[i]=arr[i+1];
}

n--;  //deletion at any position

printf("YOUR NEW ARRAY IS HERE\n");
for(i=0;i<n;i++){
    printf("%d  ",arr[i]);
}

}
}
