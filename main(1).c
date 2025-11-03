#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num,digit,org_num,count=0, sum=0;
printf("enter the number:");
   scanf("%d", &num);
   org_num=num;
     while (num!=0)
     {
         num=num/10;
         count ++;
     }      
    
    num=org_num;
    
    while (num!=0)
    {
        digit=num%10;
        sum=sum+pow(digit,count);
         num=num/10;
    }
    if (sum==org_num)
    {                                                               
        printf("Armstrong");}
    else
    {printf("not Armstrong");  
    }
    return 0;
}