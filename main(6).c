/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    int a=0, b=1,next;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series:%d %d",a,b);
    for(i=3;i<=n;i++){
        next=a+b;
        printf(" %d",next);
        a=b;
        b=next;
        printf("");
    }
    
    return 0;
}
