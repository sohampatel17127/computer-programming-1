#include<stdio.h>
void main()
{
int i,n,arr[10]={1,2,3,4,5,6,7,8,9,10},result[10];
char direction;

printf("YOUR ORIGINAL ARRAY IS HERE\n");
for(i=0;i<10;i++){
  printf("%d ",arr[i]);
}

printf("\n\n");

printf("enter the position n\n");
scanf("%d",&n);

printf("enter the direction for shifting   ::: L for left  and R for right\n");
scanf(" %c",&direction);


 for(i = 0; i < 10; i++) {
        result[i] = 0;
    }

    // LEFT SHIFT
    if(direction == 'L' ) {
        for(i = 0; i < 10; i++) {
            if(i + n < 10) {
                result[i] = arr[i + n];
            }
        }
    }
    // RIGHT SHIFT
    else if(direction == 'R' ) {
        for(i = 0; i < 10; i++) {
            if(i >= n) {
                result[i] = arr[i - n];
            }
        }

}


 printf("RESULT ARRAY: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", result[i]);
    }

}
