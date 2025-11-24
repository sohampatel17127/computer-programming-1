#include <stdio.h>
#include <string.h>

struct book
{
    char title[20];
    char author[20];
    int edition;
    char isbn[14];
    char publisher[20];
    float price;
};

void main()
{
    struct book b1, b2, b3;
    int i;

    // b1 ki details define karo
    strcpy(b1.title, "Programming in C");
    strcpy(b1.author, "RS");
    b1.edition = 3;
    strcpy(b1.isbn, "81-7654-321-0");
    strcpy(b1.publisher, "ABC Pub");
    b1.price = 250.0;

    //  b3 mein b1 ki copy karo
    b3 = b1;

    //  b2 ki details user se lo
    printf("Enter details for book 2:\n");

    printf("Enter title: ");
    scanf("%s", b2.title);

    printf("Enter author: ");
    scanf("%s", b2.author);

    printf("Enter edition: ");
    scanf("%d", &b2.edition);

    printf("Enter ISBN: ");
    scanf("%s", b2.isbn);

    printf("Enter publisher: ");
    scanf("%s", b2.publisher);

    printf("Enter price: ");
    scanf("%f", &b2.price);

    //  Display all books using LOOP
    printf("\nOur book information is below:\n");

    struct book all_books[3] = {b1, b2, b3};

    for(i = 0; i < 3; i++) {
        printf("\nBook %d:\n", i+1);
        printf("Title: %s\n", all_books[i].title);
        printf("Author: %s\n", all_books[i].author);
        printf("Edition: %d\n", all_books[i].edition);
        printf("ISBN: %s\n", all_books[i].isbn);
        printf("Publisher: %s\n", all_books[i].publisher);
        printf("Price: %.2f\n", all_books[i].price);
    }
}
