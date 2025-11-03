/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ int i,sume=0,sumo=0;
for(i=1;i<=25;i++){
    printf("%d\n",i);}
    for(i=1;i<=25;i++){if(i%2==0){sume=sume+i;}}
        printf("sum of even num:%d\n",sume);
for(i=1;i<=25;i++){if(i%2!=0){sumo=sumo+i;}}
printf("Odd number sum:%d",sumo);
    

    return 0;
}
