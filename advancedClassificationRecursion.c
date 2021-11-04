#include<math.h>
#include"NumClass.h"
#include<stdio.h>
#define TRUE 1
#define FALSE 0
int countArmstrong(int x,int count)
{
    if(x <= 0)return 0;
    return (pow(x%10,count)+countArmstrong(x/10,count));
}
int countDigit(int x)
{
    if (x<10) return 1;
    return 1+countDigit(x/10);
}
int isArmstrong(int x)
{
    int count = countDigit(x);
    int sum = countArmstrong(x,count);
    if(sum == x) return TRUE;
    else return FALSE;
}
    
int reversNum(int x,int count)
{
    if(x<10)
    return x;
    return x%10*pow(10,count)+reversNum(x/10,count-1);
}
    
int isPalindrome(int x)
{
    int count = countDigit(x);
    int sum = reversNum(x,count-1);
    if(x==sum) return TRUE;
    else return FALSE;
}
