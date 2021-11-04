#include<math.h>
#include<stdio.h>
#include"NumClass.h"
#define TRUE 1
#define FALSE 0
int isPrime(int x)
{
    if(x==2||x==1)return TRUE;
    if (x%2==0)return FALSE;
    for (int i = 3; i <= sqrt(x); i+=2)
    {
        if(x%i==0)return FALSE;
    }
    return TRUE;
        
}
int factorial(int x)
{
    int sum = 1;
    for (int i = 1; i <= x; i++)
    {
        sum*=i;
    }
    return sum;
      
}
int isStrong(int x)
{   
    if (x == 0)
    {
        return FALSE;
    }
    
    int sum = 0;
    int temp = x;
    while (temp>0)
    {
        sum+=factorial(temp%10);
        temp/=10;
    }
    if (x==sum)return TRUE;
    else return FALSE;
}
