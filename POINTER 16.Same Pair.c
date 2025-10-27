#include<stdio.h>
void main()


{
int arr[5]={2,3,5,6,7};  //sorted array hona chahiye
int *front,*back;
int targetsum=8;

front=arr;
back=arr+4;

printf("Your original aaray is here\n");
for(int i=0;i<5;i++){
printf("%d ",arr[i]);
}

printf("\n\ntargetsum=%d",targetsum);

printf("Your same pair is here\n");
while(front < back)
    {
        int currentsum = *front + *back;

if(currentsum == targetsum)
        {
            printf("Pair: %d + %d = %d\n", *front, *back, targetsum);
            front++;
            back--;
        }
 else if(currentsum < targetsum)
        {
            front++;
        }
        else
        {
            back--;
        }
    }




}
