#include <stdio.h>  
#include <conio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,rem,firstdigit;
   a = atoi(argv[1]);
    rem =a%10; 
     firstdigit=(a/10);
     firstdigit =firstdigit/10;
     printf("%d",rem+firstdigit);

    return 0;
    
}