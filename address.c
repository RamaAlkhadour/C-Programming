#include <stdio.h>
#include <string.h>
struct Books {
 char title [50];
 char aurther [50];
 int book_id; } ;

void printBook ( struct Books *book){
 printf( "Book title : %s\n",book->title);
 printf( "Book aurther : %s\n",book->aurther);
 printf( "Book book_id : %d\n",book->book_id); }

int main() {
 int i;
 struct Books Book1;
 strcpy(Book1.title, "C Programming");
 strcpy(Book1.aurther, "Ali");
 Book1.book_id =33945 ;
 while(i<1000000){
 printBook(&Book1);
 i=i+1;}
return 0 ; }