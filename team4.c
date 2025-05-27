#include <stdio.h>

int main()
{
    int s,t;
    scanf("%d %d",&s,&t);
    int perteam=s/t;
    int leftout=s%t;
    printf("%d\n %d\n",perteam,leftout);
    return 0;
}
