// define a structure employee having data members name,address,age and salary.Take data for n employee in an array and find the average salary.

#include<stdio.h>
#include<string.h>


struct employee{
    char name[10];
    char address[10];
    int age;
    int salary;
}emp[10];

void main()
{
    int n,sum=0;
    printf("\nHow many employees are there?   :  ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        
        printf("\nEnter name, address,age and salary: ");
        scanf("%s %s %d %d",emp[i].name,emp[i].address,&emp[i].age,&emp[i].salary);
        sum=sum+emp[i].salary;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\n%s %s %d %d",emp[i].name,emp[i].address,emp[i].age,emp[i].salary);
        
    }
    float avg;
    avg=sum/n;
    printf("\n\n\nThe average salary is : %f ",avg);
    

}