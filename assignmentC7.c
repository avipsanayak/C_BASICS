//to find prime or not
#include<stdio.h>

int isPrime (int n){
    int num,i,count;
    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }
}
int main(){

    int n;
    printf("Enter max range: ");
    scanf("%d",&n);\
    isPrime (n);
    return 0;
}