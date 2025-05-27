#include <stdio.h>

int main()
{
 int number;
 int digit1,digit2,sum;
 scanf("%d",&number);
 digit1 = number/10;
 digit2 = number%10;
 sum=digit1+digit2;
 printf("%d\n",sum);
    return 0;
}
