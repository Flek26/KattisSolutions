// To include the math library you must compile with "gcc planina.c -lm"

#include <stdio.h>
#include <math.h>

int main(){

        double num;
        scanf("%lf", &num);
        num = pow(2, num) + 1;
        num = pow(num, 2);
        printf("%.0lf\n", num);
        return 0;
}
