#include<stdio.h>
struc students{
    float marks;
    int roll;
    char name[20];
    char gender[10];
};
int main(){
    int n;
    printf("Enter the no. of students whose data you wish to enter\n");
    scanf("%d",&n);
    struc students s[n];
    for(int i=0;i<n;i++){
        printf("Enter name, gender, roll no. and marks of Student no. %d\n",i+1);
        scanf("%s%s%d%f",s[i].name,s[i].gender,&s[i].roll,&s[i].marks);
    }
    for(int i=0;i<n;i++){
        printf("Name:%s\tGender:%s\tRoll no.:%d\tMarks:%f\n",s[i].name,s[i].gender,s[i].roll,s[i].marks);
    }
}