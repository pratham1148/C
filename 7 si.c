#include<stdio.h>

int main ()
{
    int p,r,y;
    int si;
    printf("P =");
    scanf("%d",&p);
    printf("\nR =");
    scanf("%d",&r);
    printf("\nY =");
    scanf("%d",&y); 
    si = (p*r*y )/100;
    printf("Simple Intrest = %d",si);

    return 0 ;
}