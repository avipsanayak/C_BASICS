#include <stdio.h>
int main()
{
   char av1[100]="AVIPSA";
   int avc=0,avcount=0;
   while(av1[avc]!='\0')
   {
      if (av1[avc]== 'a' ||av1[avc] == 'A' ||av1[avc] == 'e' ||av1[avc] == 'E' ||av1[avc]== 'i' ||av1[avc] == 'I' ||av1[avc] =='o' || av1[avc]=='O' ||av1[avc] == 'u' ||av1[avc] == 'U')
      avcount++;
      avc++;
   }
   char av2[100];
   int avi=0,avk=8;avc=0;
   while(avi<100)
   {
      av2[avi]=av1[avc];
      avc++;
      int avj;
      for( avj=1;avj<=avk;avj++)
      av2[avi+avj]=' ';
      avi=avi+avj;
   }
   char av[100];
   avi=0;avc=0;
   while(avi<100)
   {
      av[avi]=av1[avc];
      avc++;
      int avj;
      for(avj=1;avj<=avk;avj++)
      av[avi+avj]='A';
      avi=avi+avj;
   }
   printf("No. of vowels: %d\n",avcount);
   printf("%s\n",av2);
   printf("%s",av);
}