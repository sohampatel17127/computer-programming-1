#include<stdio.h>
void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr[5];
    int i;


    for(i = 0; i < 5; i++)
    {
        ptr[i] = &arr[i];
    }

    printf("Original Array: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nUsing Pointers Array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", *ptr[i]);
    }
}
