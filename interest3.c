#include <stdio.h>

int main() {
    int principal, rate, years;
    double interest,amount,discount,final_amount;
    scanf("%d ",&principal);
    scanf("%d ",&rate);
    scanf("%d",&years);
    
    
    interest= (principal*rate*years)/100.0;
    amount=principal+interest;
    discount=0.02*interest;
    final_amount=amount-discount;
    printf("%.2lf\n",interest);
    printf("%.2lf\n",amount);
    printf("%.2lf\n",discount);
    printf("%.2lf\n",final_amount);
    return 0;
}
