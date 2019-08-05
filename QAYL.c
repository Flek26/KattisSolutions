#include <stdio.h>
int main(){

        int years;
        float num1, num2, total = 0;
        scanf ("%d", &years);
        for (int x = 0 ; x < years ; x++){
                scanf("%f %f", &num1, &num2);
                total = total + (num1 * num2);
        }
        printf("%f", total);

        return 0;
}
