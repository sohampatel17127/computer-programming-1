#include <stdio.h>

void main()

{

int amount,i,notes[]= {500, 200, 100, 50, 20, 10, 5, 2, 1};


printf("ENTER THE AMOUNT ");
scanf("%d", &amount);

printf("BREACKDOWN IN NOTES\n");


for(i=0;i<9;i++) {
           if(amount >= notes[i]) {
            printf("%d's notes %d\n", notes[i], amount / notes[i]);
            amount %= notes[i];  // baki bache amount ko agli notes mei convert karta hai
        }
    }
}
