#include <stdio.h>
int main(){

    int x,y;
    int product;
    scanf("%d %d", &x, &y);
    product = x * y;
    product = product - x;
    product++;
    printf("%d\n", product);

    return 0;
}
