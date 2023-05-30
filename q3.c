#include <stdio.h>
struct Av_studata{
    char av_name[20];
    char av_sex;
    int av_age;
    char av_dob[10];
   
};
 
 void av_displ(struct Av_studata *avp)
 {
     printf("Sl No.\t\tName\t\tAge\t\tDOB (DD/MM/YY)\n");
     for(int avi=0;avi<3;avi++)
    {
       
            if(avp->av_sex=='F' || avp->av_sex=='f')
            {
                printf("%d\t\t%s\t\t%d\t\t%s\n",avi+1,avp->av_name,avp->av_age,avp->av_dob);
            }
           
           avp=avp+1;
       
    }
 }
 
 int main()
{
   
    struct Av_studata av_std[3];
    for(int avi=0;avi<3;avi++)
    {
        printf("SL no. %d: \n",avi+1);
        printf("Enter Student Name: \n");
        scanf("%s",av_std[avi].av_name);
        printf("Enter Gender(m/f): \n");
        scanf(" %c",&av_std[avi].av_sex);
        printf("Enter Student Age: \n");
        scanf("%d",&av_std[avi].av_age);
        printf("Enter Student Date of Birth: \n");
        scanf("%s",av_std[avi].av_dob);
       
    }
   
   
    av_displ(av_std);
   
   
    return 0;
}