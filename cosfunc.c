#include <stdio.h>
#include <math.h>
void cosine()
{
    float x, t, sum;
    int d;
    int i, n=20;
    printf ("Input X Value (in degrees) :");
    scanf ("%f", &x);
    d= x;
    x=x*3.1412/180;
    t=1;
    sum=1;
    for (i=1; i<n+1; i++)
    {
        t= t*pow ((double) (-1), (double) (2*i-1))*x*x/ (2*i*(2*i-1));
        sum=sum+t;
    }
    printf ("\n\nCOS (%d) =%7.3f\n\n", (int) d, sum);
}
void main(){
    cosine();
}