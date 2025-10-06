
#include<stdio.h>
void main()
{
    int i,n,arr[10];
    printf("ENTER THE SIZE FOR ARRAY\n");
    scanf("%d",&n);

    printf("ENTER THE ARRAY ELEMENTS\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("YOUR ORIGINAL ARRAY IS BELOW\n");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n\n");

    if(n==0){
        printf("YOUR ARRAY IS EMPTY !! NOT POSSIBLE DELETION\n");
    }
    else{
        for(i=0;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        n--;  // deletion at begin

        printf("YOUR NEW ARRAY IS BELOW\n");
        for(i=0;i<n;i++){
            printf("%d  ",arr[i]);
        }
    }


}
