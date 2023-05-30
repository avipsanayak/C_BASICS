//Avipsa Nayak:1
#include <stdio.h>


/* Function declarations */
int isPrime(int num);
void printPrimes(int lowerLimit, int upperLimit);



int main()
{
    int anx, any,i,j;
    
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &anx, &any);
    
    // Call function to print all primes between the given range.
    printPrimes(anx, any);
    
    return 0;
}



/**
 * Print all prime numbers between lower limit and upper limit. 
 */
void printPrimes(int anx, int any)
{
    printf("All prime number between %d to %d are: ", anx,any);
    
    while(anx <= any)
    {
        // Print if current number is prime.
        if(isPrime(anx))
        {
            printf("%d, ",anx);
        }
        
        anx++;
    }
}

int isPrime(int num)   
{  
    int i,ctr=0;;  
      
    for(i=2; i<=num/2; i++)        /* 
         * If the number is divisible by any number   
         * other than 1 and self then it is not prime  
         */    
      
        if(num % i == 0)     
            break;       
        else{
            ctr=ctr+1;
            return num; 

        }
      
}