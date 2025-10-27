#include<stdio.h>
void main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr1, *ptr2;

    printf("Original Array: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Pointers to elements we want to swap
    ptr1 = &arr[1];  // Second element (20)
    ptr2 = &arr[3];  // Fourth element (40)

    printf("\n\nSwapping arr[1]=%d and arr[3]=%d\n", *ptr1, *ptr2);

    // Swap without temporary variable using pointers
    *ptr1 = *ptr1 + *ptr2;  // 20 + 40 = 60
    *ptr2 = *ptr1 - *ptr2;  // 60 - 40 = 20
    *ptr1 = *ptr1 - *ptr2;  // 60 - 20 = 40

    printf("After Swap: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
