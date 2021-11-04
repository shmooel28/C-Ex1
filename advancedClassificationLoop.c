#include<math.h>
#include"NumClass.h"
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int isArmstrong(int x)
{
    int temp = x;
    int sum  = 0;
    int count = 0;
    while(temp > 0)
    {
        count++;
        temp /= 10;
    }
    temp = x;
    while(temp > 0)
    {
        sum += pow(temp%10,count);
        temp /= 10;
    }
    if(sum == x) return TRUE;
    else return FALSE;
}

int isPalindrome(int x)
{
    int sum = 0;
    int temp = x;
      
    while (temp > 0)
    {
        sum = sum*10 + temp%10;
        temp /= 10;
    }
    if(sum == x) return TRUE;
    else return FALSE;
}      
      

