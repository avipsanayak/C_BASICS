//program to search whether an item is present in the array or not if present display the position
#include<stdio.h>
int main()
{
   int a[10], n, element, i, pos=0;

   printf("Enter array size [1-10]:\n");
   scanf("%d", &n);

   printf("Enter array elements: ");
   for(i=0; i<n; i++)scanf("%d", &a[i]);

   printf("Enter element to search: ");
   scanf("%d",&element);

   for(i=0; i<n; i++)
   {
     if(a[i]==element)
     {
       printf("%d found at position %d", element, i+1);
       return 0;
     }
   }

   printf("%d not found.", element);
   return 0;
}
