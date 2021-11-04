#include <math.h>
#include <stdio.h>
#include "NumClass.h"
int main()
{
    int a, b, i;
    scanf("%d%d",&a,&b);
    printf("The Armstrong number are:");
    for(i=a; i<=b; i++)
    {
        if(isArmstrong(i)==1)
        printf(" %d",i);
    }
    printf("\nThe Palindromes are:");
    for(i=a; i<=b; i++)
    {
        if(isPalindrome(i)==1)
        printf(" %d",i);
    }
    printf("\nThe Prime numbers are:");
    for(i=a; i<=b; i++)
    {
        if(isPrime(i)==1)
        printf(" %d",i);
    }
    printf("\nThe Strong numbers are:");
    for(i=a; i<=b; i++)
    {
        if(isStrong(i)==1)
        printf(" %d",i);
    }
    printf("\n");
}