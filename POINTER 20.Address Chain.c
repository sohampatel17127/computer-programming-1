#include<stdio.h>
void main()


{
    int x = 100;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf(" ADDRESS CHAIN \n");
    printf("x address: %u\n", &x);
    printf("p1 points to: %u\n", p1);
    printf("p2 points to: %u\n", p2);
    printf("p3 points to: %u\n", p3);

    printf("\n VALUES \n");
    printf("x = %d\n", x);
    printf("*p1 = %d\n", *p1);
    printf("**p2 = %d\n", **p2);
    printf("***p3 = %d\n", ***p3);
}
