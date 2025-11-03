#include <stdio.h>
#include <math.h>
int main()
{int base,exponent,power;

    printf("enter the base:");
    scanf("%d",&base);
    printf("enter the exponent");
    scanf("%d",&exponent);
    power=pow(base,exponent);
    printf("%d",power);

    return 0;
}
