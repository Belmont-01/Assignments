//Book Structure
#include<stdio.h>
#include<string.h>

struct book{
    char title[30];
    char author[30];
    int publication_year;
    char Isbn[13];
    float price;
}book;
int main(){
    strcpy(book.title,"Introduction to C Programming");
    strcpy(book.author,"John Smith");
    strcpy(book.Isbn,"9780131103627");
    book.publication_year=2022;
    book.price=49.99;
    
    printf("Title:%s\n",book.title);
    printf("Author:%s\n",book.author);
    printf("Publication Year:%d\n",book.publication_year);
    printf("ISBN:%s\n",book.Isbn);
    printf("Price:$%.2f",book.price);
    
    return 0;
}