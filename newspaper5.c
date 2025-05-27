#include <stdio.h>

int main() {
    int x,y,z;
    int profit;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    
    profit=(x * y)-((x * z)+100);
    printf("%d\n",profit);
    return 0;
}
    
