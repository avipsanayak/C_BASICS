#include<stdio.h>
int main()
{
     struct book
     {
         char name[20];
         float price;
         int pages;
     };
     struct book b1,b2;
     printf("ENTER NAME , PRICE AND NO. OF PAGES OF TWO BOOKS \n");
     scanf("%s%f%d",b1.name,&b1.price,&b1.pages);
     scanf("%s%f%d",b2.name,&b2.price,&b2.pages);
     printf("YOUE RESULT IS \n");
     printf("%s  %f  %d",b1.name,b1.price,b1.pages);
     printf("\n%s  %f  %d",b2.name,b2.price,b2.pages);
}